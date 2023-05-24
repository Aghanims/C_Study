#include <stdio.h>

int findMax(int, int y); //prototype function or function declaration

int main()
{
    //ternary operator -> is a shortcut for if/else statement when assigning/returning a values
    //(condition) ? value if true : value if false

    //example: find the maximum between the two number
    int x = 2;
    int y = 9;

    int result = findMax(x, y);

    printf("%d is the maximum number", result);

    return 0;
}

int findMax(int x, int y)
{
    int result = (x > y) ? (x) : (y);  
    return result;
}