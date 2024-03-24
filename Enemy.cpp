#include <iostream>
#include <string>
#include "character.h"
#include "Enemy.h"
using namespace std;

enemy::enemy() {}

enemy::enemy(string Name, int Strength, int Health, int Att) : character(Name, Strength, Health)
{
	if (Att < 1 || Att >50)
	{
		cout << "Enemy attack must be between 1-50" << endl;
		Att = 10;
	}
	else
	{
		Attack = Att;
	}

}

void enemy::display() {

	character::display();
	cout << "Attack is " << Attack << endl;

}
void enemy::display(bool sAndH)
{
	if (sAndH)
	{
		cout << "strength = " << strength << endl;
		cout << "health = " << health << endl;
	}
	else
	{
		cout << "Attack is = " << Attack << endl;
	}
}

