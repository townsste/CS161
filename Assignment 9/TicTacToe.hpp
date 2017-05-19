/*****************************************************************************************

Author: Stephen Townsend
Date: 08/01/2016
Description: This TicTacToe.hpp is a header that is used to create the class TicTacToe.
It has two private variables.  One holds the playersTurn and the onther is a board object 
to call board functions.  There is one public function called play.  There is one constructor
that is the default constructor. It is used to initialize if 'x' or 'o' has first move.

*****************************************************************************************/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include "Board.hpp"

//TicTacToe that allows two people to play a game
class TicTacToe
{
private:
//Member Variable
	Board boardObj;//a field for a Board object
	char playerTurn; //keep track of which player's turn it is
	
public:
//Function Member	
	void play(); //starts the game.	

//Constructor
	TicTacToe(char); //default	
};
#endif