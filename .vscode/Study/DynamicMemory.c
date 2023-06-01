#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
        void* malloc -> malloc(number_of_units * sizeOf_DataType_inBytes);
        void* calloc -> calloc(numberOfUnits, size_inBytes)

        //change the size of the dynamically allocated memory
        void* realloc -> realloc(void* pointer, sizeOfNewBlock_inBytes)
    */


    //dynamically allocates a memory, maybe perhaps for a variable
    int *p;
    p = (int*) malloc(sizeof(int));
    free(p); //need to free the memory from the heap after using the block of memory

    //How to dynamically allocate an array
    int array[20];
    int *q;
    q = (int*) malloc(20 *sizeof(int)); //20 is the size of the array

    q[0] = 2;
    *(q + 1) = 4;
    
    free(q);

    return 0;
}