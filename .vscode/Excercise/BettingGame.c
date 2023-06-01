#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

/*
    ****Simple Betting Game****
    - Shuffles 3 cards "Queen (Q), Ace (A), King (K)"
    - player has to bet an amount and need to guess which position is the Ace
    - if player guess correctly, he wins --> balance  + (2 * bet)
    - if player guess incorrectly, he losses --> balance - bet
*/

//use integer for simplicity
int initialCash = 100;

typedef struct 
{
    int bet;
    int balance;
    int winCount;
} Player;


void play()
{
    Player *user = (Player*)malloc(sizeof(user));
    char cards[] = {'Q', 'A', 'K'};

    user->balance = initialCash;
    user->winCount = 0;

    srand(time(NULL));
    bool done = false;
    while(!done)
    {
        printf("Current balance: $%d\n", user->balance);
        printf("Enter bet : $");
        scanf("%d", &user->bet);
        fflush(stdin);

        printf("Shuffling...\n");

        //shuffle and swap generator
        int x = rand() % 3;
        int y = rand() % 3;

        char temp = cards[x];
        cards[x] = cards[y];
        cards[y] = temp;

        int guess;
        printf("Guess the position of ACE: (1, 2, 3)\n");
        printf("Guess: ");
        scanf("%d", &guess);
        fflush(stdin);

        if(cards[guess - 1] == 'A')
        {
            printf("You won!!!\n");
            user->balance += (2*user->bet);
            user->winCount++;
        }
        else 
        {
            printf("You lose\n");
            user->balance -= user->bet;
        }
        
        printf("%c, %c, %c\n", cards[0], cards[1], cards[2]);

        char response;
        printf("Try again? (y/n): ");
        scanf("%c", &response);
        fflush(stdin);

        if(toupper(response) == 'N')
            done = true;
        
        printf("*************************************************************\n");
    }
  
    if(user->balance >= 0)
        printf("Overall balance: %d\n", user->balance);
    else if(user->balance < 0)
        printf("You owe: %d\n", user->balance);

    printf("Number of wins: %d\n", user->winCount);

    free(user);
}


int main()
{
    play();

    return 0;
}