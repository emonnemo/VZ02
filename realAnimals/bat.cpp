//File bat.cpp

#include "bat.h"
#include "../animal.h"
#include <iostream>
using namespace std;

int Bat::batNB = 0;

Bat::Bat(pair<int,int> _position): Animal("BT",++batNB,'*',0.15,food,'O',_position) {
	eat = food;
	habitat.insert('A');
}

Bat::Bat(float _weight, pair<int,int> _position): Animal("BT",++batNB,'*',_weight,food,'O',_position) {
	eat = food;
	habitat.insert('A');
}

Bat::~Bat(){}

Bat::Bat(const Bat& b): Animal(b.ID,b.id,b.legend,b.weight,b.eat,b.type,b.position) {
	habitat = b.habitat;
}

Bat& Bat::operator= (const Bat& b) {
	SetWeight(b.GetWeight());
	SetPos(b.GetPos());
	return *this;
}

void Bat::Act() const {
	cout << ID << "-";
	if (id < 10){
		cout << "0"; 
	}
	cout << id	<< ": *screech*" << endl;
}

void Bat::Interact() const {
	Description("bat");
	Act();
}