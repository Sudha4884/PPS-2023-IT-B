#include<stdio.h>
void checkVorCVoid(char);
void main()
{
char c;
printf("Enter a alphabet:");
scanf("%c",&c);
 checkVorCVoid(c);
}

void checkVorCVoid(char c)
{
if( c=='a' || c=='e' || c== 'i' || c=='o' || c=='u'|| c=='A'|| c=='E' ||c=='I' ||c=='O'||c=='U')
{
printf("It is a vowel");
}
else
{
printf("It is a consonant");
}
}