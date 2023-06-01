#include <stdio.h>


int main()
{
    //pointers = a "variable-like" reference that holds a memory address to another variable
    //        -some tasks are performed more easily with pointers
    //      * = indirection operator (value at address)

    int age = 21;

    //create pointer of age:
    int *pAge = NULL; //it is good practice to assign NULL if declaring a pointer
    pAge = &age;

    printf("value of age : %d\n", age);
    printf("Address of age: %p\n", &age);

    printf("\nValue of pAge %p\n", pAge);
    printf("Value at stored address: %d\n", *pAge); //dereference

    printf("\nsize of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    //Change value of age using value of operator (*)
    printf("\nFrom age %d\n", *pAge);
    *pAge = 36;
    printf("To age %d\n", *pAge);
    printf("age: %d\n", age); //the original variable is changed


    /*
        in an array: 
        Initiall, if p points to a[i], then
        int a[n];
        int *p 

        (p = p + j) == (&a[i + j]) ; where i is the index and j is some number 
    */
    int array[] = {12, 5, 8, 34, 43, 69};
    int *p = &array[1];

    printf("\n%d\n\n",*p);

    p += 3;
    *(array + 2) = 20;
    printf("%d\n", array[2]);
    printf("%d\n\n", *p);

    //print array using pointers
    // for(int i = 0; i < 6; i++)
    // {
    //     int *pointer = &array[0];
        
    //     pointer += i;
    //     printf("%d\n", *pointer);
    // }

    //when using "array" directly, it will behave as a memory address; similar to &array[0]; and "array + 1" == &array[1]
    int sum = 0;
    for(int *pointer = array; pointer <= array + 5; pointer++)
        sum = sum + *pointer; 
    
    printf("Total sum: %d", sum);


    //using pointer to print 2d array using one loop
    int test[3][7] = {
                        {2,6,9,1,2,5,6},
                        {4,1,12,61,62,45,13},
                        {45,125,121,67,78,1,2}
                   };

    //        &test[0][0]                 
    for(int *p = test; p <= &test[2][6]; p++)
        printf("%d  ", *p);

/***************************************************/
    int f = 9;

    int* l;
    l = &f;

    //pointer that pointers to another pointer
    int* *e;
    e = &l;

    **e = 25;

    printf("\n\nAddress of f: %p", &f);
    printf("\nValue of f: %d", f);

    printf("\n\nAddress of l: %p", l);
    printf("\nValue of l: %d", *l);

    printf("\n\naddress of e: %p", e);
    printf("\nValue of e: %d", **e);
    return 0;
}