/*
 * Question15GuessingGame.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author/Edited by: Zach Cullins
 */

#include <iostream>
#include <ctime>
//#include <cstdlib>
using namespace std;

int main()
{
	int randomNumber = 0;
	int numberGuess = 0;
	int numberTries = 4; //New variable created for the number of tries given
	//changed the number of tries to 4, user needs at least 1 attempt to get into the while loop
	// so it comes out to a total of exactly 5 tries, rather than 6 tries if I set the variable to 5

	//generate a random number from 1 through 10
	srand(static_cast<int>(time(0)));
	randomNumber = 1 + rand() % (10 - 1 + 1);

	//get first guess from user
	cout << "Guess a number from 1 through 10: ";
	cin >> numberGuess;

	while ((numberGuess != randomNumber) && (numberTries != 0)) //While loop will continue as long as the numberGuess is wrong and numberTries does not equal 0
	{
		//Deduct one from the number of tries after the first guess
		numberTries--;
		cout << "Sorry, guess again: ";
		cin >> numberGuess;

		//Provides a prompt stating how many guesses are left
		cout << "You have " << numberTries << " tries left. " << endl;

	}	//end while

	//If-else if loop created for if the randomNumber is guessed correctly & for when numberTries = 0
	if (numberGuess == randomNumber)
		cout << endl << "Yes, the number is " << randomNumber << "." << endl;
	else if (numberTries == 0)
		cout << "Sorry, the correct number is: " << randomNumber << endl;

	return 0;
}   //end of main function


