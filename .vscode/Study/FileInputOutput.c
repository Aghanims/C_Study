#include <stdio.h>

/*             
        w -> write  // if file exist, it will be overwritten
        r -> read   //fopen() returns NULL if file !exist
        r+ -> reading and writing  //fopen() returns NULL if file !exist
        w+ -> reading and wrting    // if file exist, it will be overwritten

        rb -> read in binary mode
        wb -> write in binary mode 
        rb+ -> reading and wrting in binary mode  
        wb+ -> reading and writing in binary mode

        a -> append at the end of the file
        ab -> append in binary mode
        a+ -> reading and appending
        ab+ -> reading and appending in binary mode
    */

int main()
{
    const char *fileName = "D:/Coding/CLang/.vscode/Study/TxtAndBinaryFiles/study.txt";

    // FILE *pFile = fopen(fileName, "w");
    
    // fprintf(pFile, "\nTell Me all about it!");

    // // if(remove(fileName) == 0)
    // //     printf("Successfully deleted");
    // // else 
    // //     printf("NOT Successfully deleted");

    // fclose(pFile);

/**********************************************************************/
    //reading 

    FILE *pFile = fopen(fileName, "r");

    if(pFile == NULL)
        printf("File NOT detected");
    
    //buffer is the container of a single line of text in the file
    char buffer[255];
    while(fgets(buffer, 255, pFile) != NULL)
        printf("%s", buffer);
    
    fclose(pFile);

    return 0;
}