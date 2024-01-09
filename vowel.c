/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int vowel(char);
void main()
{
    char CH;
    scanf("%c",&CH);
    int res;
    res = vowel(CH);
    if(res)
    printf("\n %c is Vowel",CH);
    else
    printf("\n %c is Consonant",CH);
}
int vowel(char ch)
{
    if(ch=='a'||ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A'||ch=='E' || ch=='I' || ch=='O' || ch=='U')
    return 1;
    else
    return 0;
}