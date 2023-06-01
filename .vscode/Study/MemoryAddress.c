#include <stdio.h>

int main()
{
    /*
        memory = an array of bytes within RAM (street with houses)
        memory block = a single unit (byte) within memory, used to hold some value 
        //               ------Houses------                            ---person---

        memory address = the address of where a memory block is located (house address)
    */


    char a = 'X';
    int b;
    int c[3]; // 1 memory block of int is equal to 4, so a an array needs to be accomodated.

    //memory blocks
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    //memory address
    //%p = format specifier for an address
    // & = address of operator
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;
}