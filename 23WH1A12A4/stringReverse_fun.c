#include<stdio.h>
#include<string.h>
void rev(int n,char str[30]);

int main()
{
    char str[30];
    gets(str);
    int n = strlen(str);
    printf("\n String reverse is \n");
    rev(n,str);
}

void rev(int n,char str[30])
{

    char rev[30];
    for(int i=0; i<n; i++)
    {
        rev[n-1-i] = str[i];
    }
    for(int i=0; i<n; i++)
    {
        printf("%c", rev[i]);
    }
}