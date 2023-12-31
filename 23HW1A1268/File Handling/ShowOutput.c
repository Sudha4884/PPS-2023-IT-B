#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char text;

    fptr = fopen("C:\\Mythili\\BTech\\1stYear_1sem\\File handling\\create.txt","r");

    if(fptr == NULL)
    {
        printf("Error");
        exit(1);
    }

    while(text != EOF)
    {
        text = fgetc(fptr);
        printf("%c",text);
    }

    fclose(fptr);
    return 0;
}