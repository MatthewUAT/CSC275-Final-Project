#pragma once
#include <iostream>
#include <string>
#include "character.h"
using namespace std;

class helper : public character {
private:
	int Defense;

public:
	helper();
	helper(string Name, int Strength, int Health, int Def);
	void display();
	void display(bool sAndH);

};