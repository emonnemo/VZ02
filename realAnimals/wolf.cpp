//File wolf.cpp

#include "wolf.h"
#include <iostream>
using namespace std;


Wolf::Wolf(pair<int,int> _position): Animal("WF",wolfNB,45,food,'K',_position) {
	wolfNB++;
}

Wolf::Wolf(float _weight, pair<int,int> _position): Animal("WF",wolfNB,_weight,food,'K',_position) {
	wolfNB++;
}

Wolf::~Wolf(){}

Wolf::Wolf(const Wolf& w): Animal(w.ID,w.id,w.weight,w.eat,w.type,w.position) {
	wolfNB++;
}

Wolf& Wolf::operator= (const Wolf& w) {
	SetWeight(w.GetWeight());
	SetPos(w.GetPos());
}

void Wolf::Act() const {
	cout << "*howl*";
}

void Wolf::Interact() const {
	Description("wolf");
	Act();
}