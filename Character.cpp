#include <iostream>
#include <string>
#include "character.h"
using namespace std;

character::character() {}

character::character(string Name, int Strength, int Health) {
	name = Name;
	strength = Strength;
	health = Health;
	//encapsulation means rules for data

	if (Strength < 10 || Strength > 100)
	{
		cout << "Strength must be 10 to 100 setting strength to 50" << endl;
		strength = 50;
	}
	else
	{
		strength = Strength;
	}
	
	if (Health < 10 || Health > 100)
	{
		cout << " Health must be between 10 and 100 set to 70" << endl;
		health = 70;
	}
	else
	{
		health = Health;
	}

}

void character::display() {

	cout << "Name = " << name << endl;
	cout << "Strength = " << strength << endl;
	cout << "Health = " << health << endl;

}