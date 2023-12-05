#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter the value of a: ");
    scanf("%d \n%d \n%d \n%d \n%d",&a,&b,&c,&d,&e);
    if(a%3==0 && a%5==0)
       printf("\nnumbers are divisible by 3 and 5");
    return 0;
}