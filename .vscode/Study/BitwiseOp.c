#include <stdio.h>

int main()
{
    //Bitwise Operators = special operators used in bit level programming
    /*
        & = AND
        | = OR
        ^ = XOR
        << = Left shift
        >> = Right shift
    */

    int x = 6;       //00000110
    int y = 12;      //00001100
    int z = 0;

    z = x & y;       //00000100  (4)
    printf("AND = %d\n", z);

    z = x | y;       //00001110 (14)
    printf("OR = %d\n", z);
    
    z = x ^ y;       //00001010 (10)
    printf("XOR = %d\n", z);
    
    z = x << 1; //00001100 ; shift the binary of 6 to the left by 1
    printf("left shift = %d\n", z);

    z = x >> 1; //00000011 ; shift the binary of 6 to the right by 1
    printf("right shift = %d\n", z);
    return 0;
}