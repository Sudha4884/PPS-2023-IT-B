#include<stdio.h>
int main()
{
    int n,count;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           count++; 
        }
    }
    if(count==2)
    printf("ITS A PRIME NUMBER");
    else
    printf("NOT PRIME NUMBGER");
}