#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],i;
    printf(" enter numbers : ");
    for(i=0; i<5; i++)
    { 
        scanf("%d",&a[i]);
    }
    printf("\n ********** \n ");
    for(i=0; i<5; i++)
    {
        printf("%2d",a[i]);
    }
    return 0;
}
