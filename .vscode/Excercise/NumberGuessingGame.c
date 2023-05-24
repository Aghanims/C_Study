#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


void numberGuessingGame(int min, int max)
{
    srand(time(0));

    //player statistics
    int guess = 0;
    int guesses = 0;

    printf("\nAnswer has been generated. What is the number?");
    int  ans = (rand() % max) + min + 1;

    bool done = false;
    while(!done)
    {
        printf("\nGuess a number: ");
        scanf("%d", &guess);
        fflush(stdin);

        guesses++;

        //give player a hint if the answer is lower or above the current guess
        if(guess < ans)
            printf("\nGood attempt! The answer is higher.");
        else if(guess > ans)
            printf("\nGood attempt! The answer is lower.");
        else 
        {
            printf("\nCongratulations! You have successfully found the correct answer. Well done!");
            done = true;
        }
    }   

    printf("\nNumber of attempts made: %d", guesses);
}

int main()
{
    //use current time as a seed for random numbers
    //srand(time(0));

    //int randNum = rand(); //generate random number 0 -> 32,767

    //int randNum = (rand() % 6) + 1; //generate random number 0 -> 6

    //printf("%d", randNum);

/************************************************************************************/
    // Number Guessing Game
    //goal: binary search intuition

    //ask user what range of number to guess
    int min = 0;
    int max = 0;

    printf("\nEnter lower bound: ");
    scanf("%d", &min);
    fflush(stdin);

    printf("Enter upper bound: ");
    scanf("%d", &max);
    fflush(stdin);

    numberGuessingGame(min, max);

    return 0;
}