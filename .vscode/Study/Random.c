#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct 
{
    char name[50];
    int age;
    char hobbies[4][100];
}User;

void printMultiArray(int array[][4], int row, int col)
{
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
        {
            printf("%d  ", *(array[i] + j));
        }
}

int main()
{
    User *user1 = malloc(sizeof(User));
    
    strcpy(user1->name, "Richmond");

    char *name = NULL;

    name = user1->name;
    *name = 'F';

    printf("%s\n", name);
    printf("%s\n\n", user1->name);
/*******************************************************/

    int test[3][4] = {
                        {5, 2, 1, 6},
                        {1, 5, 7, 4},
                        {0, 1, 9, 10}
                     };
    int testSize = sizeof(test) / sizeof((test[0][0]));

    int *b = test[0];

    //both are various ways in accessing values in a matrix
    printf("%d\n", *(*(test + 1) + 2));
    printf("%d", *(test[1] + 2));

    printf("\n\n\n");
    printMultiArray(test,3,4);

    free(user1);

/*******************************************************/

    //array cannot be assigned with as size during runtime
    /*
        int n;
        scanf("%d", &n);
        int array[n];  -----> This is wrong
    */
   //instead, dynamically allocate memory perhaps using malloc() function

    srand(time(0));

    int size;
   
    printf("\n\nEnter size of array: ");
    scanf("%d", &size);

    int *array = (int*) malloc(size * sizeof(int)); //--> memory will be stored in heap

    //double the size of the array using realloc function
    array = (int*) realloc(array, 2* size*sizeof(int));

    for(int i = 0; i < 2*size; i++)
        *(array + i) = (rand() % 101);
    
    for(int i = 0; i < 2*size; i++)
        printf("%d  ", array[i]);

    free(array);

    return 0;
}