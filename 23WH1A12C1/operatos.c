// Working of arithmetic operators
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter a and b values: ");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("a % b = %d \n",c);
    
    return 0;
}