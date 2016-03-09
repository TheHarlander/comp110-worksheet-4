// TerminalHacking.cpp : Defines the entry point for the console application.
//


//
/*Using http://www.cplusplus.com/forum/unices/79580/ for help on this piece of work*/
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


int main()
{
	/*The answer*/
	string answer = "apple";
	string guess = " ";
	/*Sets the amount of lives the player has */
	int lives = 4;
	int n;
	int y;
	/* Outputs Enter Password and then the list of
	words for it to give the fallout feel*/
	cout << "Enter Password" << endl;
	cout << endl;
	cout << "O34NJF BOPPY FSD90 POLLY" << endl;
	cout << "O23WE3 ATHLE FKJIR YOUNG" << endl;
	cout << "O3FNRF APPLE FMNR4 LEPER" << endl;
	cout << "ODFSSD BOOLY FW35G CUPLE" << endl;
	cout << "O5JGFU ARIEL F86JG RAPLE" << endl;
	/*executes this code*/
	do {

		/*if lives is above 0 do this*/
		if (lives > 0) {
			/*asks for user input*/
			cin >> guess;
			/*If the guess the user made is not APPLE do this*/
			if (guess != "APPLE") {
				/*if the guess is one of these take a life off and tell them how many chracters they got correct*/
				if (guess == "BOPPY" || guess == "BOOLY" || guess == "ARIEL" || guess == "POLLY" || guess == "LEPER") {
					cout << "Wrong Password, Try Again " << "1/5 Characters Correct" << endl;
				}
				/*If none of the above words are entered and the answer was also not entered just do this*/
				else { cout << "Wrong Password, Try Again" << "3/5 Charcters Correct" << endl; }
			}
		}
		/*lose a life because you entered the wrong answer*/
		lives = lives - 1;
		/*print out how many lives you have left*/
		cout << lives << "Live(s) Left ";

		/*while the guess is not the answer and you lives are above 0 do this*/
	} while (guess != "APPLE" && lives != 0);
	/*if the answer is inputed do this, which is just printing you win*/
	if (guess == "APPLE") {
		cout << " Password accepted" << endl;
		cout << "Welcome Back, Bob" << endl;
	}
	/*if you lose all your lives print out you lose*/
	else {
		cout << "You have entered to many incorrect passwords, locking console..." << endl;

	}
}