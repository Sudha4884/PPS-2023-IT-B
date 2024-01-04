
#include<stdio.h>
#include<string.h>
int main()
{
   char s[30], ch[20];
   char *found;
   puts("Enter the first string: ");
   gets(s);
   puts("Enter the string to be searched: ");
   gets(ch);
   found = strstr(s, ch);
   if(found)
   {
      printf("Second String is found in the First String at %d position.\n", found - s);
   }
   else
   {
      printf("-1");
   }
   return 0;
}