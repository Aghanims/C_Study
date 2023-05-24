#include <stdio.h>
#include <string.h>
#include <stdbool.h>


struct Player
{
    char userName[20];
    int level;
};



int main()
{
    //struct = collection of related members "variables" ; they are similar to classes in Java 
    //      -   however, struct cannot have methods

    struct Player player1;
    struct Player player2;

    //basic assignment of variable:
    strcpy(player1.userName, "Bhoxz");
    player1.level = 27;

    strcpy(player2.userName, "Aghanims");
    player2.level = 36;

    printf("\nPlayer1 userName: %s is level %d", player1.userName, player1.level);
    printf("\nPlayer2 userName: %s is level %d", player2.userName, player2.level);

    
    return 0;
}