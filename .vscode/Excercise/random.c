#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>

// Global variables
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void printBoard();
void resetBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
void printWinner(char);
char checkWinner();
int findBestMove();

int main()
{
    char response = 'N';
    do
    {
        play();

        printf("\nDo you want to play again (Y/N): ");
        scanf(" %c", &response);
        response = toupper(response);

    } while (response == 'Y');

    printf("\nThanks For Playing!!!");

    return 0;
}

void printBoard()
{
    printf("\n|---|---|---|\n");
    for (int row = 0; row < 3; row++)
    {
        printf("| %c | %c | %c |", board[row][0], board[row][1], board[row][2]);
        printf("\n|---|---|---|\n");
    }
    printf("\n");
}

void resetBoard()
{
    // Empty the board by assigning it whitespace character
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
            board[row][col] = ' ';
    }
}

int checkFreeSpaces()
{
    int freeSpace = 9;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (board[row][col] != ' ')
                freeSpace--;
        }
    }
    return freeSpace;
}

void playerMove()
{
    int row;
    int col;

    bool done = false;
    while (!done)
    {
        printf("Enter row #(1-3): ");
        scanf("%d", &row);
        row--;
        fflush(stdin);

        printf("Enter column #(1-3): ");
        scanf("%d", &col);
        col--;
        fflush(stdin);

        if (board[row][col] != ' ')
            printf("Invalid Move\n");
        else
        {
            board[row][col] = PLAYER;
            done = true;
        }
    }
}

void computerMove()
{
    srand(time(0));

    int bestMove = findBestMove();
    int row = bestMove / 3;
    int col = bestMove % 3;

    if (checkFreeSpaces() > 0 && bestMove != -1)
        board[row][col] = COMPUTER;
    else
        printWinner(' ');
}

char checkWinner()
{
    /*
        3 cases for 3 straight pairs of same characters (winning condition)
            - pair by rows
            - pair by columns
            - pair by diagonals
    */

    // Check rows
    for (int row = 0; row < 3; row++)
    {
        if (board[row][0] == board[row][1] && board[row][0] == board[row][2])
            return board[row][0];
    }

    // Check columns
    for (int col = 0; col < 3; col++)
    {
        if (board[0][col] == board[1][col] && board[0][col] == board[2][col])
            return board[0][col];
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return board[0][0];

    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return board[0][2];

    return ' ';
}

void printWinner(char winner)
{
    if (winner == PLAYER)
        printf("You Win!");
    else if (winner == COMPUTER)
        printf("You Lose!");
    else
        printf("Draw");
}

int findBestMove()
{
    // Check if the computer player can win in the next move

    // Check if the opponent can win in the next move

    // Check if there is an opportunity to create a fork

    // Check if the opponent can create a fork

    // Take the center square if available
    if (board[1][1] == ' ')
        return 4;

    // Take a random corner square if available
    if (board[0][0] == ' ')
        return 0;
    if (board[0][2] == ' ')
        return 2;
    if (board[2][0] == ' ')
        return 6;
    if (board[2][2] == ' ')
        return 8;

    // Take any remaining side square
    if (board[0][1] == ' ')
        return 1;
    if (board[1][0] == ' ')
        return 3;
    if (board[1][2] == ' ')
        return 5;
    if (board[2][1] == ' ')
        return 7;

    return -1; // No valid move
}

void play()
{
    char winner = ' ';

    resetBoard();

    while (winner == ' ' && checkFreeSpaces() != 0)
    {
        printBoard();

        playerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
            break;

        computerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
            break;
    }

    printBoard();
    printWinner(winner);
}
