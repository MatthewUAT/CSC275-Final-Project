#include "character.h"
#include "enemy.h"
#include "Helper.h"
#include <iostream>
#include <memory>
#include <string>
using namespace std;
string uName, hName, eName;
int uStrength, hStrength, eStrength;
int uHealth, hHealth, eHealth;
int hDefense, eAtt;


void intro()
{

	cout << "	***Welcome to the fight simulator***" << endl;
	cout << "lets build your character..." << endl;

}

void charBuilder()
{
	//function that gets info to build the user
	cout << "tell us your name" << endl;
	cin >> uName;
	cout << "What is you strength? 10-100" << endl;
	cin >> uStrength;
	cout << "What is your Health? 10-100" << endl;
	cin >> uHealth;
	character c1(uName, uStrength, uHealth);
	c1.display();
	cout << "***Now for your helper***" << endl;
	cout << "tell us your helper's name" << endl;
	cin >> hName;
	cout << "What is you helper's strength? 10-100" << endl;
	cin >> hStrength;
	cout << "What is your helper's Health? 10-100" << endl;
	cin >> hHealth;
	cout << "What is your helper's Defense? 1-50" << endl;
	cin >> hDefense;
	helper h1(hName, hStrength, hHealth, hDefense);
	h1.display();

}

void enemyGen()
{
	cout << "	***You opponent has arrived***" << endl;
	// generates random stats for the enemy
	string monsterNames[3] = { "Hydra","Medusa","Ogre" };
	srand(static_cast<unsigned int>(time(nullptr)));
	// Calculate the number of names in the list
	int numNames = sizeof(monsterNames) / sizeof(monsterNames[3]);
	// Generate a random index within the range of the number of names
	int randomIndex = rand() % numNames;
	// Retrieve the random name using the random index
	string randomName = monsterNames[randomIndex];
	// Output the randomly selected name
	//randomName = eName;

	//random number for strength, health and attack
	srand(static_cast<unsigned int>(time(nullptr)));
	// Generate a random number between 10 and 100
	// rand() % 91 generates a number between 0 and 90
	// Adding 10 shifts the range to start from 10
	int randomStrength = rand() % 91 + 10;
	// Output the randomly generated number


	// rand() % 91 generates a number between 0 and 90
	// Adding 10 shifts the range to start from 10
	int randomHealth = rand() % 91 + 10;
	// Output the randomly generated number


	// rand() % 41 generates a number between 0 and 40
// Adding 10 shifts the range to start from 10
	int randomAttack = rand() % 41 + 10;
	// Output the randomly generated number
	eName = randomName;
	eStrength = randomStrength;
	eHealth = randomHealth;
	eAtt = randomAttack;

	cout << "Here is your random opponent" << endl;
	enemy e1(eName, eStrength, eHealth, eAtt);
	e1.display();



}

void performAttack(int& ptr_hHealth, int& eHealth) {

	// Deduct the attack power from the defender's health
	uHealth -= eAtt;

}
void fight(int& uHealth, int& hHealth, int& eHealth)
{


	cout << "	****Let the fight begin****" << endl;
	cout << uName << " is fighting " << eName << " with the help of " << hName << endl;

	srand(static_cast<unsigned int>(std::time(nullptr)));

	// Loop until one of the players' health reaches 0
	while (uHealth > 0 && hHealth > 0 && eHealth > 0)
	{

		//enemy attacks helper
		if (hHealth > 0)
			performAttack(eHealth, hHealth);

		// helper attacks enemy
		if (eHealth > 0)
			performAttack(hHealth, eHealth);

		// enemy attack player
		if (uHealth > 0)
			performAttack(eHealth, uHealth);


	}

	cout << uName << " health is " << uHealth << endl;
	cout << hName << " health is " << hHealth << endl;
	cout << eName << " health is " << eHealth << endl;

	
	
	if (uHealth > 0)
		cout << uName << " has survived " << eName << endl;
	else
		cout << uName << " has not survived " << eName << endl;
	if (eHealth > 0)
		cout << eName << " has survived " << endl; 
	else 
		cout << eName << " has not survived " << endl;
	if (hHealth > 0)
		cout << hName << " has survived "<<eName << endl;
	else
		cout << hName << " has not survived " << eName << endl;
}



int main() {

	intro();
	charBuilder();
	enemyGen();
	fight(uHealth, hHealth, eHealth);
}

