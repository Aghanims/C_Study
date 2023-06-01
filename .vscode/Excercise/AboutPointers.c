#include <stdio.h>

/************************************************************************************************/
void minMax(int array[], int size, int *forMin, int *forMax)
{
    int currentMin, currentMax = array[0];

    for(int i = 1; i < size; i++)
    {
        if(array[i] < currentMin)
            currentMin = array[i];

        if(array[i] > currentMax)
            currentMax = array[i];
    }

    //dereference
    *forMin = currentMin;
    *forMax = currentMax;
}
/************************************************************************************************/

//binary search that returns a pointer
int *findIndex(int array[], int size, int value)
{
    int start = 0;
    int end = size - 1;

    //dynamically allocate a return memory so that it will persist after the function returns
    int *index = (int*)malloc(sizeof(int));
    //      malloc() function returns a return type of void* (which is generic), we can omit the typecast in this case

    while(start <= end)
    {
        int midPoint = start + (end - start) / 2;

        if(value > array[midPoint])
            start = midPoint + 1;
        else if(value < array[midPoint])
            end = midPoint - 1;
        else 
        {
            *index = midPoint;
            return index;
        }
    }

    *index = -1;

    free(index); //free the dynamically allocated memory

    return index;
}

int main()
{
    int test[] = {2, 6, 1, 62, 12, 89, 42, 67, 124, 14, 27};
    int size = sizeof(test) / sizeof(test[0]);

    int min, max;

    minMax(test, size, &min, &max);

    printf("Min value: %d\n", min);
    printf("Max value: %d\n", max);

    int value = 124;
    int *indexOf = findIndex(test, size, value);
    printf("The index of %d is %d", value, *indexOf);

    return 0;
}