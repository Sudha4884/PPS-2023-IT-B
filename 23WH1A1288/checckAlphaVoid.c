#include<stdio.h>
int checkAlpha(char c);
void main()
{
char c,res;
printf("Enetr a character:");
scanf("%c", &c);
checkAlpha(c);
}

int checkAlpha(char c)
{
if(( c >= 65 &&  c<= 90) || (c >=97 && c <=122))
{
printf("It is alphabet");
}
else
{
printf("Not an alphabet");
}
}