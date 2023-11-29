#include<stdio.h>
int checkChar(char);
void main()
{
char c,result;
printf("Enter a alphabet:");
scanf("%c",&c);
result = checkChar(c);
if(result)
{
printf("%c is a vowel",c);
}
else
{
printf("%c is a consonant",c);
}
}

int checkChar(char c)
{
if( c=='a' || c=='e' || c== 'i' || c=='o' || c=='u')
{
return 1;
}
else
{
return 0;
}
}

