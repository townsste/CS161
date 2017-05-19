/*****************************************************************************************

Author: Stephen Townsend
Date: 08/1/2016
Description: This is the Board.cpp that contains the function definitions for the
Board header. The Board constructor function is used to initialize the board array to 
empty ('.').  The print function is used to print the board.  The makeMove function records
the players input if the spot is availiable.  Applies input validation. The gameState
function is used to determine the winner of the game through if statements that test each
possible winning combination.

*****************************************************************************************/

#include "Board.hpp"

/*****************************************************************************************
**										Board
** Default constructor used to initializes the 3x3 array to being empty
******************************************************************************************/
Board::Board()
{
	for(int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			boardArray[i][j] = '.';
}


/*****************************************************************************************
**										print
** Print the board out
******************************************************************************************/
void Board::print()
{
	cout << "\n      " << "0 " << "1 " << "2" << endl; //output column numbering
	
	for(int i = 0; i < 3; i++)
	{
		cout << "    " << i << " "; //output row numbering
		
		for (int j = 0; j < 3; j++)
		{
			cout << boardArray[i][j] << " "; //output board
		}
		cout << endl;
	}
}


/*****************************************************************************************
**										makeMove
** Used for input validation
*****************************************************************************************/
bool Board::makeMove(int xCord, int yCord, char playerTurn)
{
	if (boardArray[xCord][yCord] == '.') //location is unoccupied. (TRUE)
	{
		boardArray[xCord][yCord] = playerTurn; //record the location to player's char (x or o)
		return true;
	}
	else //location is occupied. (FALSE)
		return false; 
}		


/*****************************************************************************************
**										gameState
** Used to Determine the winner, draw, or unfinished
*****************************************************************************************/
Status Board::gameState()
{
	int internalState = UNFINISHED;

	if (boardArray[0][0] == boardArray[0][1] && boardArray[0][1] == boardArray[0][2] && boardArray[0][0] != '.')
	{
		if (boardArray[0][0] == 'x')
		{
			internalState = X_WON;
			return X_WON;
		}
		else if (boardArray[0][0] == 'o')
		{
			internalState = O_WON;
			return O_WON;
		}
	}
	
	else if (boardArray[1][0] == boardArray[1][1] && boardArray[1][1] == boardArray[1][2] && boardArray[1][0] != '.')
	{
		if (boardArray[1][0] == 'x')
		{
			internalState = X_WON;
			return X_WON;
		}
		else if (boardArray[1][0] == 'o')
		{
			internalState = O_WON;
			return O_WON;
		}
	}

	else if (boardArray[2][0] == boardArray[2][1] && boardArray[2][1] == boardArray[2][2] && boardArray[2][0] != '.')
	{
		if (boardArray[2][0] == 'x')
		{
			internalState = X_WON;
			return X_WON;
		}
		else if (boardArray[2][0] == 'o')
		{
			internalState = O_WON;
			return O_WON;
		}
	}

	else if (boardArray[0][0] == boardArray[1][0] && boardArray[1][0] == boardArray[2][0] && boardArray[0][0] != '.')
	{
		if (boardArray[0][0] == 'x')
		{
			internalState = X_WON;
			return X_WON;
		}
		else if (boardArray[0][0] == 'o')
		{
			internalState = O_WON;
			return O_WON;
		}
	}

	else if (boardArray[0][1] == boardArray[1][1] && boardArray[1][1] == boardArray[2][1] && boardArray[0][1] != '.')
	{
		if (boardArray[0][1] == 'x')
		{
			internalState = X_WON;
			return X_WON;
		}
		else if (boardArray[0][1] == 'o')
		{
			internalState = O_WON;
			return O_WON;
		}
	}

	else if (boardArray[0][2] == boardArray[1][2] && boardArray[1][2] == boardArray[2][2] && boardArray[0][2] != '.')
	{
		if (boardArray[0][2] == 'x')
		{
			internalState = X_WON;
			return X_WON;
		}
		else if (boardArray[0][2] == 'o')
		{
			internalState = O_WON;
			return O_WON;
		}
	}

	else if (boardArray[0][0] == boardArray[1][1] && boardArray[1][1] == boardArray[2][2] && boardArray[0][0] != '.')
	{
		if (boardArray[0][0] == 'x')
		{
			internalState = X_WON;
			return X_WON;
		}
		else if (boardArray[0][0] == 'o')
		{
			internalState = O_WON;
			return O_WON;
		}
	}

	else if (boardArray[2][0] == boardArray[1][1] && boardArray[1][1] == boardArray[0][2] && boardArray[2][0] != '.')
	{
		if (boardArray[2][0] == 'x')
		{
			internalState = X_WON;
			return X_WON;
		}
		else if (boardArray[2][0] == 'o')
		{
			internalState = O_WON;
			return O_WON;
		}
	}

	if (internalState != X_WON || internalState != O_WON)
	{
		for (int row = 0; row < 3; row++)
			for (int column = 0; column < 3; column++)
				if (boardArray[row][column] == '.')
					return UNFINISHED;
	}
	
	return DRAW;
}







//Test Loop - Not working
/*
int countX;
int countO;
int countBlank = 0;

for (int row = 0; row < 3; row++)
{
countX = 0;
countO = 0;

for (int column = 0; column < 3; column++) // 20 11 02
{
if (boardArray[row][column] == 'o' || boardArray[column][row] == 'o')
countO++;
if (boardArray[row][column] == 'x' || boardArray[column][row] == 'x')
countX++;
if (boardArray[row][column] == '.')
countBlank++;
}

if (countO == 3)
return O_WON;
else if (countX == 3)
return X_WON;
}

countX = 0;
countO = 0;

for (int diagRow = 0; diagRow < 3; diagRow++)
{
for (int diagColumn = 0; diagColumn < 3; diagColumn++) // 20 11 02
{
if (boardArray[diagColumn][diagColumn] == 'o')
countO++;
if (boardArray[diagColumn][diagColumn] == 'x')
countX++;
}

if (countO == 3)
return O_WON;
else if (countX == 3)
return X_WON;
}
if (countBlank == 0)
return DRAW;
else
return UNFINISHED;
*/

