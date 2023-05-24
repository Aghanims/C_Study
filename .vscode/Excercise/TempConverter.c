#include <stdio.h>
#include <ctype.h> // to use functions regarding to characters
#include <stdbool.h> // too use boolean operator (Ex: bool example = true;)


static void tempConverter(char unit)
{
    float inCelsius, inKelvin, inFahrenheit = 0;

    char into;
    switch(unit)
    {
        case 'K':
            printf("Enter value in Kelvin : ");
            scanf("%f", &inKelvin);

            printf("From Kelvin into >> (F or C): ");
            scanf(" %c", &into);
            into = toupper(into);

            if(into == 'F')
            {
                inFahrenheit = (inKelvin - 273) * ((9/5) + 32);
                printf("%0.2f Kelvin is %0.2f in Fahrenheit.", inKelvin, inFahrenheit);
            }
            else if(into == 'C')
            {
                inCelsius = inKelvin - 273.15;
                printf("%0.2f Kelvin is %0.2f in Celsius.", inKelvin, inCelsius);
            }
            break;
        case 'F':
            printf("Enter value in Fahrenheit: ");
            scanf("%f", &inFahrenheit);

            printf("From Fahrenheit into >> (K or C): ");
            scanf(" %c", &into);
            into = toupper(into);

            if(into == 'K')
            {
                inKelvin = ((inFahrenheit - 32) / 1.8) + 273.15;
                printf("%0.2f Fahrenheit is %0.2f in Kelvin.", inFahrenheit, inKelvin);
            }
            else if(into == 'C')
            {
                inCelsius = (5/9) * (inFahrenheit - 32);
                printf("%0.2f Fahrenheit is %0.2f in Celsius.", inFahrenheit, inCelsius);
            }
            break;
        case 'C':
            printf("Enter value in Celsius: ");
            scanf("%f", &inCelsius);

            printf("From Celsius into >> (F or K): ");
            scanf(" %c", &into);
            into = toupper(into);

            if(into == 'F')
            {
                inFahrenheit = (1.8 * inCelsius) + 32;
                printf("%0.2f Celsius is %0.2f in Fahrenheit.", inCelsius, inFahrenheit);
            }
            else if(into == 'K')
            {
                inKelvin = inCelsius + 273.15;
                printf("%0.2f Celsius is %0.2f in Kelvin.", inCelsius, inKelvin);
            }
            break;
        default:
            printf("Wrong input value");
    }
}

int main()
{
    /*
        task: 
            -Ask user for input
                * Ask on the inputted unit (F, K, C) 
                * and the value of the unit
            
            -Then ask user for the unit to be converted into
            -return the value;
    */

    char unit; 
    printf("Enter unit to be converted (F, K, C): ");
    scanf("%c", &unit);

    unit = toupper(unit); //to make the input not case sensitive (accepts either lowercase or uppercase)

    tempConverter(unit);
    
    return 0;
}