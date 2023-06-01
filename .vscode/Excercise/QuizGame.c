#include <stdio.h>

typedef struct 
{
    char question[100];
    char choices[4][50];
    char answer;
} Question;

void addQuestion(Question *q) 
{
    printf("Enter the question: ");
    fgets(q->question, sizeof(q->question), stdin);
    fflush(stdin);

    for (int i = 0; i < 4; i++) 
    {
        printf("Enter choice %c: ", 'A' + i);
        fgets(q->choices[i], sizeof(q->choices[i]), stdin);
        fflush(stdin);
    }
    
    printf("Enter the correct answer (A, B, C, or D): ");
    scanf(" %c", &q->answer);
    
    printf("\n");
}

void askQuestion(Question* q) 
{
    printf("%s\n", q->question);

    for (int i = 0; i < 4; i++) 
        printf("%c. %s", 'A' + i, q->choices[i]);
    
    printf("Your answer: ");
    char userAnswer;
    scanf("%c", &userAnswer);
    fflush(stdin);
    
    if (toupper(userAnswer) == toupper(q->answer)) 
        printf("Correct!\n"); 
    else 
        printf("Incorrect! The correct answer is %c.\n", q->answer);
    
    printf("\n");
}

int main() 
{
    Question quiz[3];
    
    // Add the questions
    for (int i = 0; i < 3; i++) 
    {
        printf("Adding Question %d:\n", i + 1);
        addQuestion(&quiz[i]);
        fflush(stdin);
    }
    
    // Ask the questions
    for (int i = 0; i < 3; i++) 
    {
        printf("Question %d:\n", i + 1);
        askQuestion(&quiz[i]);
    }

    return 0;
}