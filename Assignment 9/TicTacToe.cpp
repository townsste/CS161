/*****************************************************************************************

Author: Stephen Townsend
Date: 08/1/2016
Description: This is the TicTacToe.cpp that contains the function definitions for the
TicTacToe header. The TicTacToe constructor function is used to initialize playerTurn to a lower
character.  The play function is used to play the game.  It will call the board input 
validation and game state functions.  Play will also output the outcome of the game.

*****************************************************************************************/

#include "TicTacToe.hpp"

int main()
{
	char playerStart;

	cout << "Which player is first? (x or o): "; //Who will go first?
	cin >> playerStart;
	
	TicTacToe gameObj(playerStart); //creates a new TicTacToe object
	
	gameObj.play(); //starts the game
	
	return 0;	
}

/*****************************************************************************************
**										TicTacToe
** Default constructor used to initialize playerTurn to a lowercase character from main.
******************************************************************************************/
TicTacToe::TicTacToe(char playerStart)
{
	playerTurn = tolower(playerStart); //set players turn to private variable tracker
}	


/*****************************************************************************************
**										play
** Used to play the game.  Will call input validation and game state.
******************************************************************************************/
void TicTacToe::play()
{
	int xCord, 
		yCord;

		cout << "Player " << playerTurn << " goes first" << endl; //which player goes first

		do
		{
			boardObj.print(); //print out the board before input

			cout << "\nPlayer " << playerTurn << ": please enter your move" << endl;
			cin >> xCord >> yCord;

			while (!boardObj.makeMove(xCord, yCord, playerTurn))//Check input -- send input to makeMove.
			{
				cout << "That square is already taken" << endl;
				cin >> xCord >> yCord;
			}
			
			//New player
			if (playerTurn == 'x')  //check current player
				playerTurn = 'o';	//o's turn
			else 
				playerTurn = 'x';	//x's turn

		} 
		while (boardObj.gameState() == UNFINISHED);

		boardObj.print();
	
		//	game outcome
		if (boardObj.gameState() == X_WON)
			cout << "Player x won" << endl;
		else if (boardObj.gameState() == O_WON)
			cout << "Player o won" << endl;
		else
			cout << "The game was a draw" << endl;
}