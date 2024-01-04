
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char str[20];
   int i, l, f = 0;
   clrscr();
   printf("Enter any string\n");
   gets(str);
   l = strlen(str);
   for(i = 0; i <= l - 1; i++)
   {
      if(str[i] == str[l - 1 - i])
      f = f + 1;
   }
   if(f == l)
   {
      printf("The string is palindrome");
   }
   else
   {
      printf("The string is not a palindrome");
   }
   getch();
}