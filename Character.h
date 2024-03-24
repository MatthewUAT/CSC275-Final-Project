#pragma once

#include <string>
using namespace std;


class character
{
	//private means only the character class can mod them
	//protected inherited classes can mod them 
protected:
	string name;
	int strength;
	int health;

public:
	character();
	character(string Name, int Strength, int Health);
	// virtual method abstract class
	virtual void display();
};