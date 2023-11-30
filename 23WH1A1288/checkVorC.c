#include<stdio.h>
int checkVorC(char);
void main()
{
char c,result;
printf("Enter a alphabet:");
scanf("%c",&c);
result = checkVorC(c);
if(result)
{
printf("%c is a vowel",c);
}
else
{
printf("%c is a consonant",c);
}
}

int checkVorC(char c)
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