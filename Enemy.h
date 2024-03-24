#pragma once
#include <iostream>
#include <string>
#include "character.h"
using namespace std;

class enemy : public character {
private:
	int Defense;
	int Attack;
	

public:
	enemy();
	enemy(string Name, int Strength, int Health, int Att);
	void display();
	void display(bool sAndH);

};