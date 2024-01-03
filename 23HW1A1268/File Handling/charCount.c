#include<stdio.h>
#include<stdlib.h>

int main()
{
    int count=0;
    char ch;
    FILE *fptr;
    fptr = fopen("C:\\Mythili\\BTech\\1stYear_1sem\\File handling\\create.txt","r");

    if(fptr == NULL)
    {
        printf("Error");
        exit(-1);
    }

    while(ch != EOF)
    {
        ch = fgetc(fptr);
        count++;
    }
    
    fclose(fptr);
    printf("Number of characters are %d",count);
    return 0;
}