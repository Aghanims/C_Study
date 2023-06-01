#include <stdio.h>
#include <stdlib.h>


int add(int x, int y)
{
    return x + y;
}

//function pointers can be an argument to a function; callback
int average(int (*p)(int,int), int x, int y)
{
    return p(x,y) / 2;
}

//callback is also a requirement for qsort() or quicksort found in the library
int compare(const void *a, const void *b)
{
    int A = *((int*)a);
    int B = *((int*)b);

    return A - B;
}

int main()
{

    /*
        pointer to function that should take (int, int) as argument and return int
    */
    int (*p)(int, int);
    p = add;

    int c = p(2, 3);
    printf("%d\n", c);


    int ans = average(add, 4, 5);
    printf("%d\n", ans);
/*************************************************************/
    int array[] = {2, 5, 1, 78, 45, 21, -99};
    int size = sizeof(array) / sizeof(array[0]);

    qsort(array, size, sizeof(int), compare);
    
    for(int i = 0; i < size; i++)
        printf("%d   ", *(array + i));
     
    return 0;
}