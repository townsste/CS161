/*****************************************************************************************

Author: Stephen Townsend
Date: 07/02/2016
Description: This program is used to play a game.  The user will be prompted to enter a 
number that will be guessed.  The program will then ask the player to guess a number.
If the guess was to high then the player will be prompted for guessing to high.  A similar
prompt occurs for low guesses.  When the player guesses the correct number, the program 
will display how many tries it took to guess the number.

*****************************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int guessNumber = 0, //The number for a player to guess
		numberToGuess = 0, //Holds the players guess
		guessCounter = 0; //Used to hold how many tries it took to guess correctly

	cout << "Enter the number for the player to guess." << endl;
	cin >> numberToGuess;

	cout << "Enter your guess." << endl;

	//Loop as long as the guess number does not equal the number to guess
	while (guessNumber != numberToGuess)
	{
		cin >> guessNumber;
		guessCounter++;  //Counter to hold each loop +1

		//Guess is to high
		if (guessNumber > numberToGuess)
			cout << "Too high - try again.\n";
		
		//Guess is to low
		if (guessNumber < numberToGuess)
			cout << "Too low - try again.\n";
	}

	//Output the amount tries it took to guess correctly
	cout << "You guessed it in " << guessCounter << " tries" << endl;

	return 0;
}