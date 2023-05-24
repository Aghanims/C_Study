#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**************************************************************/

//swap
void swap(int array[], int x, int y)
{
    int temp = array[x];
    array[x] = array[y];
    array[y] = temp;
}

/**************************************************************/

//insertion sort
void insertionSort(int array[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int j = i;

        while(j > 0 && array[j] < array[j - 1])
        {
            swap(array, j, j-1);
            j--;
        }
    }
}

/**************************************************************/

//quicksort
int partition(int array[], int startIndex, int endIndex)
{
    //this algorithm uses midPoint as the pivot
    int midPoint = startIndex + (endIndex - startIndex) / 2;
    int pivot = array[midPoint];

    //pointers
    int low = startIndex;
    int high = endIndex;

    bool done = false;
    while(!done)
    {
        while(array[low] < pivot)
            low++;

        while(array[high] > pivot)
            high--;

        if(low >= high)
            done = true;
        else
        {
            swap(array, low, high);
            low++;
            high--;
        }
    }

    return high;
}

void quickSort(int array[], int startIndex, int endIndex)
{
    //can only sort if there are atleast 2 existing elements
    if(endIndex <= startIndex) {return;}

    //create partition : this variable is the last index of the left partition
    int high = partition(array, startIndex, endIndex);

    //recursively partition and sort the left partition
    quickSort(array, startIndex, high);

    //do the same for the right partition
    quickSort(array, high + 1, endIndex);

}

/**************************************************************/

//binary search | will return the index of the specified element
int binarySearch(int array[], int size, int value)
{
    int start = 0;
    int end = size - 1;

    while(end >= start)
    {
        int midPoint = start + (end - start) / 2;

        if(value < array[midPoint])
            end = midPoint - 1;
        else if(value > array[midPoint])
            start = midPoint + 1;
        else 
            return midPoint;
    }

    return -1; 
}

/**************************************************************/
    
void printContents(int array[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d  ", array[i]);
    
}

/**************************************************************/


int main()
{
    int test[] = {5, 1, 6, 2, 8, 3, 7, 5};
    int size = sizeof(test) / sizeof(test[0]);

    quickSort(test, 0, size);
    printContents(test, size);

    // int find = 5;
    // int result = binarySearch(test, size, find);
    // printf("\n%d", result);

    return 0;
}