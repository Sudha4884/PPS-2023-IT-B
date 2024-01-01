// to convert the f1 contents to upper case and print into file f2
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    FILE *f1,*f2;
    char ch;

    f1 = fopen("C:\\Mythili\\BTech\\1stYear_1sem\\File handling\\f1.txt","r");
    f2 = fopen("C:\\Mythili\\BTech\\1stYear_1sem\\File handling\\f2.txt","w+");

   if(f1 == NULL || f2 == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

    while(ch != EOF)
    {
        ch = fgetc(f1);
        fputc(toupper(ch),f2);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}