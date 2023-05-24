#include<stdio.h>
#include<math.h>

int main()
{

    float BMI, weight, height = 0;

    //imperial BMI formula 
    /*
        BMI = 703 * (Weight in lbs) / (height in inches)^2
    */

   printf("Enter weight in pounds: ");
   scanf("%f", &weight);

   printf("Enter height in inches: ");
   scanf("%f", &height);

    if(weight == 0 || height == 0)
        printf("Weight and height cannot be zero. Please try again");
    else
        BMI = (703 * weight) / (height * height);
    
    /*
        BMI scale: 

        <18.5 --> under Weight
        18.5 - 24.9 --> Normal
        25 - 29.9 --> Over Weight
        30 - 34.9 --> Obesity (Class I)
        35 - 39.9 --> Obesity (Class II)
        >40 --> Extreme Obesity
    */

    printf("\nBMI = %0.2f, ", BMI);
    if(BMI < 18.5)
        printf("Under Weight");
    else if(BMI >= 18.5 && BMI <= 24.9) 
        printf("Normal Weight");
    else if(BMI >= 25 && BMI <= 29.9)
        printf("Over Weight");
    else if(BMI >= 30 && BMI <= 34.9)
        printf("Obesity (Class I)");
    else if(BMI >= 35 && BMI <= 39.9)
        printf("Obesity (Class II)");
    else 
        printf("Extreme Obesity");

    return 0;
}