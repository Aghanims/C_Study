#include <stdio.h>
#include <string.h>

//it is helpful for code readability
enum Days{Sun, Mon, Tue, Wed, Thu, Fri, Sat};

void todayIs(enum Days x)
{
    printf("Today is ");
    
    switch(x)
    {
        case Sun: 
            printf("Sunday");
            break;
        case Mon:
            printf("Monday");
            break;
        case Tue:
            printf("Tuesday");
            break;
        case Wed:
            printf("Wednesday");
            break;
        case Thu:
            printf("Thursday");
            break;
        case Fri:
            printf("Friday");
            break;
        default:
            printf("Invalid");
    }
}

int main()
{
    enum Days today = Wed;

    todayIs(today);

    return 0;
}