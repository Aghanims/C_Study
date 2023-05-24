#include <stdio.h>
#include <string.h> //Access string functions

typedef struct
{
    char fullName[50];
    int id;
    char fieldOfStudy[50];

}StudentInfo;


int main()
{
    int entries = 0;

    printf("\nEnter number of student entries: ");
    scanf("%d", &entries);
    fflush(stdin);

    //this will acts like a database for student information
    StudentInfo students[entries];
    int size = sizeof(students) / sizeof(students[0]);

    //add entries to student database (array)
    for(int i = 0; i < size; i++)
    {
        printf("\nEntry number %d: ", i+1);

        printf("\nEnter student name: ");
        fgets(students[i].fullName, 50, stdin);
        students[i].fullName[strlen(students[i].fullName) - 1] = '\0';

        printf("Enter student ID: ");
        scanf("%d", &students[i].id);
        fflush(stdin);

        printf("Enter field of study: ");
        fgets(students[i].fieldOfStudy, 50, stdin);
        students[i].fieldOfStudy[strlen(students[i].fieldOfStudy) - 1] = '\0';
    }

    //print all studen info
    for(int i = 0; i < size; i++)
    {
        printf("\n----------------------------------------------------------------------------");
        printf("\n\nName: %s", students[i].fullName);
        printf("\nstudent ID: %d", students[i].id);
        printf("\nField of study: %s", students[i].fieldOfStudy);
    }

    return 0;
}