#include <iostream>
using namespace std;


// Contains the state of the game
// Global array of characters
char squares[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};

/**
 * @brief This will print out the board for the tic-tac-toe game
 *        update the squares array to add 'X' and 'O' to the board
 */
void board()
{
    // \n means new line, like hitting the enter button on a text editor
	cout << "\n\nTic Tac Toe\n" << endl;

	cout << "Player 1 (X)  -  Player 2 (O)\n" << endl;

    // Print out the board
	cout << "     |     |     " << endl;
	cout << "  " << squares[0] << "  |  " << squares[1] << "  |  " << squares[2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << squares[3] << "  |  " << squares[4] << "  |  " << squares[5] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << squares[6] << "  |  " << squares[7] << "  |  " << squares[8] << endl;
	cout << "     |     |     " << endl << endl;
}


/**
 * @brief Should return an integer meaning decided by programmer
 *  example: -1 could mean came in progress
 *            0 game over, no one has one
 *            1 x has won
 *            2 o has won
 * @return int status of the game 
 */
int gameStatus()
{
    return -1;
}

int main()
{
    board(); // You can remove this, just showing you how to call board and what it would look like.
    return 0;
}
