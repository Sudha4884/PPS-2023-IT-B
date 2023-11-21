#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the values of a , b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d IS GREATER\n",a);
    else if(b>a && b>c)
    printf("%d IS GREATER",b);
    else
    printf("%d IS GREATER",c);
    return 0;
}