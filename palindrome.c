/*#include<stdio.h>
int main()
{
    int n,num,rev,rem;
    rem = 0;
    rev = 0;
    printf("Enter the number:");
    scanf("%d\n",&num);
    n = num;
    while(num!=0)
    {
        rem = num % 10;
        num /= 10;
        rev = rev*10 + rem;
        //printf("the numbers are %d ",rev);
    }
    printf("The reverse of  %d is %d",rev);
    return 0;
}*/


//palindrome of a string
#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
printf("Enter a string:\n");
scanf("%s",&str);
int l = 0;
int h = strlen(str)-1;
{
    while(h > 1)
    {
        if (str[l++] != str[h--])
        {
            printf("The string is not a palindrome");
            return 0;
        }
        printf("The string is a palindrome");
    }
}
}