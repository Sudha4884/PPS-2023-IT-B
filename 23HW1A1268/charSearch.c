#include<stdio.h>
#include<string.h>
char charsearch(char str[]);
int main()
{
    char str[10];
    printf("Enter a string ");
    scanf("%s",&str);
    char res = charsearch(str);
    if (res == 'n')
        printf("\n-1");
}

char charsearch(char str[])
{
    char k;
    printf("enter a search character ");
    scanf(" %c", &k);
    for(int i=0;i<strlen(str);i++)
    {
        if (k==str[i])
        {
            printf("the character %c lies at position %d",str[i],i+1);
            return 0;
        }
    }
    return 'n';
}
