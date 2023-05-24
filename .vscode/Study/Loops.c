#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    //Task : infinitely ask user for their name; user cannot just enter direcly without providing their name

    char fullName[50];

    printf("Please provide your name: ");
    fgets(fullName, 50, stdin);
    fullName[strlen(fullName) - 1] = '\0';
    
    bool done = false;
    while(!done)
    {
        if(strlen(fullName) == 0)
        {
            printf("You must enter a name. Please try again: ");
            fgets(fullName, 50, stdin);
            fullName[strlen(fullName) - 1] = '\0';
        }
        else
            done = true; 
    }

    printf("%s is now recorded in Death Note. Good luck\n", fullName);

    /*************************************************************************************/

    //Task: print a rectangle with a given number of row and column 

    int numRow, numCol = 0;
    char symbol = '#';

    bool rowDone = false;
    while(!rowDone)
    {
        printf("\nEnter number of rows: ");
        scanf("%d", &numRow);

        if(numRow <= 0)
            printf("\nMust provide a row number. Please try again.");
        else 
            rowDone = true;
            
    }

    bool colDone = false;
    while(!colDone)
    {
        printf("\nEnter number of columns: ");
        scanf("%d", &numCol);

        if(numCol <= 0)
            printf("\nMust provide a column number. Please try again.");
        else 
            colDone = true;
    }
    
    for(int row = 0; row < numRow; row++)
    {
        for(int col = 0; col < numCol; col++)
            printf("#\t");
        
        printf("\n\n\n\n"); // \t has 4 spaces, 
    }

    return 0;
}