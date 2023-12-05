#include<stdio.h>
#include<string.h>
int main()
{
 char str1[20];
 char str2[20];
  printf("enter str 1: ");
  gets(str1);
  strcpy(str2,str1);
  printf("after copying: %s", str2);
   
  
  return 0;
}