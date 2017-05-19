/*****************************************************************************************

Author: Stephen Townsend
Date: 08/01/2016
Description: This Board.hpp is a header that is used to create the class Board.
It has one private variable called boardArray[][] that will hold the players input.  
There are three public functions (makeMove, gameState, and print).  There is one constructor 
that is the default constructor. It is used to initialize the array to being empty.

*****************************************************************************************/

#ifndef BORAD_HPP
#define BORAD_HPP
#include <iostream>

using namespace std;

enum Status {X_WON, O_WON, DRAW, UNFINISHED};

//Represents a tictactoe board
class Board
{
private:
//Member Variable
	char boardArray[3][3]; //store the locations of the players' moves.

public:
//Function Members
	bool makeMove(int, int, char); //input verification
	Status gameState(); //returns one (X_WON, O_WON, DRAW, or UNFINISHED)
	void print(); //prints out the current board to the screen.		
	
//Constructor
	Board(); //initializes the 3x3 array to being empty
};
#endif