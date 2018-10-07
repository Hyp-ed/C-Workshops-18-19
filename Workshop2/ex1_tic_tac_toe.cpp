#include <iostream>
using namespace std;


// Contains the state of the game
// Global array of characters
char squares[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};

/**
 * @brief This will print out the board for the tic-tac-toe game
 *        update the squares array to add 'X' and 'O' to the board
 */
void printBoard()
{
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
 * @brief Checks the Horizontal rows returns the following if
 * 		no one has won : 0
 * 		X has won      : 1
 * 		O has won      : 2
 * @return int 
 */
int checkHorizontal()
{
	for(int i = 0; i < sizeof(squares); i = i + 3) {
		if(squares[i] == squares[i+1] && squares[i+1]  == squares[i+2]) {
			if (squares[i] == 'X') return 1;
			if (squares[i] == 'O') return 2;
		}
	}
	return 0;
}

/**
 * @brief Checks the vertical columns returns the following if
 * 		no one has won : 0
 * 		X has won      : 1
 * 		O has won      : 2
 * @return int 
 */
int checkVertical()
{
	for(int i = 0; i < sizeof(squares)/3; i++) {
		if(squares[i] == squares[i+3] && squares[i+3] == squares[i+6]) {
			if (squares[i] == 'X') return 1;
			if (squares[i] == 'O') return 2;
		}
	}
	return 0;
}

/**
 * @brief Checks the Diagonal returns the following if
 * 		no one has won : 0
 * 		X has won      : 1
 * 		O has won      : 2
 * @return int 
 */
int checkDiagonal()
{
	if(squares[0] == squares[4] && squares[4] == squares[8]) {
		if (squares[0] == 'X') return 1;
		if (squares[0] == 'O') return 2;
	}

	if(squares[2] == squares[4] && squares[4] == squares[6]) {
		if (squares[2] == 'X') return 1;
		if (squares[2] == 'O') return 2;
	}
	return 0;
}

/**
 * @brief Should return an integer, meaning decided by programmer
 *  example: 0 could mean came in progress or no one has won
 *            1 x has won
 *            2 o has won
 * @return int status of the game 
 */
int gameStatus()
{
	if(checkHorizontal()) return checkHorizontal();
	if(checkVertical()) return checkVertical();
	if(checkDiagonal()) return checkDiagonal();
	
    return 0;
}

/**
 * @brief Checks if the input is between 1-9 and that there is not already an 'X' or 'O' in there.
 * 
 * @param input square pos 1-9
 * @return true if input is valid
 * @return false otherwise
 */
bool isInputCorrect(int input)
{
	if (input>=0 && input<=8 && (squares[input] != 'X' && squares[input] != 'O')) return true;
	return false;
}

/**
 * @brief Asks the user for an input
 * 
 * @param the turn of the player
 */
int askForMove(int turn)
{
	int input;
	if (turn % 2 == 0) {
		cout << "Player 1 (X) make your move enter a number from 1-9" << endl;
	} else {
		cout << "Player 2 (O) make your move enter a number from 1-9" << endl;
	}
	cin >> input;
	input--;
	return input;
}

int main()
{
    // \n means new line, like hitting the enter button on a text editor
	cout << "\n\nTic Tac Toe\n" << endl;
	cout << "Player 1 (X)  -  Player 2 (O)\n" << endl;
	printBoard();

	int input = 0;
	int turn = 0;
	while(gameStatus() == 0 && turn < 9) {
		input = askForMove(turn);

		// // Check valid input
		while (!isInputCorrect(input)) {
			cout << "Incorrect entry please enter please enter again" << endl;
			input = askForMove(turn);
		}

		if (turn % 2 == 0) {
			squares[input] = 'X';
		} else {
			squares[input] = 'O';
		}
		printBoard();
		turn++;
	}

	switch(gameStatus()){
		case 0 : 
			cout << "No one has won" << endl;
			break;
		case 1 :
			cout << "Player 1(X) has won" << endl;
			break;
		case 2 :
			cout << "Player 2(O) has won" << endl;
	}
	
    return 0;
}