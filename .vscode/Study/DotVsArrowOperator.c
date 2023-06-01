#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
} Point;

/*
    you should use the dot operator (.) when working with an instance 
    of a struct and the arrow operator (->) when working with a pointer to a struct.
*/

int main() 
{
    Point p1;  // Struct instance
    p1.x = 10;
    p1.y = 20;
    printf("Coordinates using dot operator: (%d, %d)\n", p1.x, p1.y);

    Point *p2 = (Point*)malloc(sizeof(Point));  // Struct pointer
    p2->x = 30;
    p2->y = 40;
    printf("Coordinates using arrow operator: (%d, %d)\n", p2->x, p2->y);

    free(p2);  // Free dynamically allocated memory
}
