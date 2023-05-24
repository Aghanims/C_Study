#include <stdio.h>
#include <string.h>

int main()
{

    char first[] = "Richmond";
    char last[] = "Gonzales";

    //some usefule String functions:

    //strlwr(first);            // converts the string to lower case
    //strupr(first);            // converts the string to upper case
    //strcat(first, last);      // append last[] to the end of first[]
    //strncat(first, last, 2);  // append n characters from last[] to first[]
    //strcpy(first, last);      // copy last to first
    //strncpy(first, last, 2);  // copy n characters of last[] to first[]

    //strset(first, '?');       // sets all characters of a string to a given character
    //strnset(first, '?', 2);   // sets first n character(s) of a string to a given character
    //strrev(first);            // reverses a string

    //int stringLength = strlen(first);             // returns the length of the given string
    //int stringCompare = strcmp(first, last);      // compare all characters; return 0 if equal, else return a number != 0
    //int stringCompare = strncmp(first, last, 2);  // string compare all n characters
    //int stringCompare = strcmpi(first, last);        // string compare all characters (ignore case)

    //printf("%d", stringLength);
    printf("\n%s", first);

    /*
        if(stringCompare == 0)
            printf("%s and %s are equal", first, last);
        else 
            printf("%s and %s are not equal", first, last);
    */

    return 0;
}