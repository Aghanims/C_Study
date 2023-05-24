#include <stdio.h>
#include <string.h>

int main()
{
    //String array
    char cars[][10] = {"Toyota", "Nissan", "Tesla", "Corvette", "Lambo"};
    int theSize = sizeof(cars) / sizeof(cars[0]);

    //to change/assign element to an index use "strcpy()"
    strcpy(cars[0], "Mustang");

    for(int i = 0; i < theSize; i++)
        printf("\n%d. %s", i+1, cars[i]);
    
    
    printf("\n");
/*********************************************************************************************************/
    //primitive type arrays
    double prices[] = {5.32, 135.5, 12.7, 251.6};

    int size = sizeof(prices) / sizeof(prices[0]); //C has no built in function for getting the length of an array

    printf("\nArray before insertion sort: \n");
    for(int i = 0; i < size; i++)
        printf("%0.2lf  ", prices[i]);

    printf("\n\nArray after insertion sort: \n");
    for(int i = 1; i < size; i++)
    {
        int j = i;

        while(prices[j] < prices[j - 1] && j != 0)
        {
            double temp = prices[j];
            prices[j] = prices [j - 1];
            prices[j-1] = temp;
        }
    }

    for(int i = 0; i < size; i++)
        printf("%0.2lf  ", prices[i]);

/****************************************************************************************************/

    //2D arrays
    int numRow = 10;
    int numCol = 15;

    //board matrix
    int board[numRow][numCol];

    //sizes
    int rowSize = sizeof(board) / sizeof(board[0]);
    int colSize = sizeof(board[0]) / sizeof(board[0][0]);

    printf("\nMultiplication table of row = %d and column = %d\n", numRow, numCol);

    //print a multiplication table;
    for(int row = 1; row <= rowSize; row++)
    {
        for(int col = 1; col <= colSize; col++)
        {
            int currentValue = row * col;
            printf("%d\t", currentValue);
        }
        printf("\n");
    }

    return 0;
}


