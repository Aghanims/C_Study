#include<stdio.h>

#define _USE_MATH_DEFINES
#include<math.h>

int main()
{
    //Some math functions:
        // double a = sqrt(9);
        // double b = pow(2, 4);
        // int c = round(3.14);
        // int d = ceil(3.14);
        // int e = floor(3.14);
        // double f = fabs(-100);
        // double g = log(3);
        // double h = sin(45);
        // double i = cos(45);
        // double j = tan(45);

    //Task: Ask user for a radius of a circle, then calculate its circumference
    int radius = 0;
    float circumference = 0;
    float area = 0;

    printf("----Circumference calculator----");
    printf("\nEnter the radius: ");
    
    scanf("%d", &radius);

    circumference = 2 * M_PI * radius;
    area = M_PI * (radius * radius);

    printf("\n");
    printf("When radius = %d, the circumference is equals %0.2f and its area = %0.2f ", radius, circumference, area);


    printf("\n------------------------------------------------------------------------------------------");
    printf("\n Now calculate the hypotenuse of a right triangle");
    
    double line1, line2, hypotenuse = 0;

    printf("\nEnter the length of line 1: ");
    scanf("%lf", &line1);

    printf("Enter the length of line 2: ");
    scanf("%lf", &line2);

    hypotenuse = sqrt((line1 * line1) + (line2 * line2));

    printf("\nHypotenuse is equal to %0.3lf", hypotenuse);
    
    return 0;
}