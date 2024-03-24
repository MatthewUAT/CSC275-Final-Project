#include <iostream>
#include <string>
#include "character.h"
#include "Helper.h"
using namespace std;

helper::helper() {} 

helper::helper(string Name, int Strength, int Health, int Def) : character(Name, Strength, Health)
{
	if (Def < 1 || Def >50)
	{
		cout << "Helper defense must be between 1-50" << endl;
		Def = 25;
	}
	else
	{
		Defense = Def;
	}


}

void helper::display() {

	character::display();
	cout << "Defense is " << Defense << endl;

}
void helper::display(bool sAndH)
{
	if (sAndH)
	{
		cout << "strength = " << strength << endl;
		cout << "health = " << health << endl;
	}
	else
	{
		cout << "Defense is = " << Defense << endl;
	}
}
