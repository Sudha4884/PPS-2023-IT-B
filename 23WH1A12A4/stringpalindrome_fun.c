#include<stdio.h>
#include<string.h>
void PalindromeCheck(int n,char str[30]);

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int n = strlen(str);
    PalindromeCheck(n,str);
}

void PalindromeCheck(int n,char str[100])
{
    int i;
    char rev[100];
    for(i=0; i<n; i++)
    {
        rev[n-1-i] = str[i];
    }
    for(i=0; i<n; i++)
    {
        if(rev[i]==str[i])
        {
            printf("\nString is a paindrome\n");
            break;
        }
    }
}