// Merging the contents of f1 and f2 and printing them to file f3
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2,*f3;
    char text1,text2;

    f1 = fopen("C:\\Mythili\\BTech\\1stYear_1sem\\File handling\\f1.txt","r");
    f2 = fopen("C:\\Mythili\\BTech\\1stYear_1sem\\File handling\\f2.txt","r");
    f3 = fopen("C:\\Mythili\\BTech\\1stYear_1sem\\File handling\\f3.txt","w");

    if(f1 == NULL || f2 == NULL || f3 == NULL)
    {
        printf("Error!");   
        exit(1);             
    }

    while(text1 != EOF)
    {
        text1 = fgetc(f1);
        fputc(text1,f3);
    }
    fputs("\n",f3);
    while(text2 != EOF)
    {
        text2 = fgetc(f2);
        fputc(text2,f3);
    }
}