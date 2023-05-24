#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//typedef char user[50];

//can be use along with struct: from:
// struct User
// {
//     char userName[50];
//     char pass[50];
//     int id;
// };

//into:
typedef struct 
{
    char userName[50];
    char pass[50];
    int id;
} User;


int main()
{
    //typedef -> reserved keyword that gives an existing data type a "nickname"

    //instead of this :
    //char user1[50] = "Bhoxz";

    //we can use this instead:
    //user user1 = "Bhoxz";

    //normal struct
    //struct User user1 = {"Aghanims", "Wixim93_richmond", 7794929};
    
    //struct with typdef
    User user1 = {"Aghanims", "Wixim93_richmond", 7794929};

    printf("user name: %s", user1.userName);

    return 0;
}