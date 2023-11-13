/*#include<stdio.h>
int main()
{
    int a, b, c, i,n;
    a = 0, n = 0;
    b = 1;
    printf("Enter the size of the fibonacci series:\n");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i = 0; i < n; i++)
    {
    c = a + b;
    a = b;
    b = c;
    printf(" %d ", c);
    }
    return 0;

}*/


#include<stdio.h>
int main()
{
    int a, b, c, i,n,sum = 0;
    a = 1;
    b = 2;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
    c = a + b;
    a = b;
    b = c;
   if( c % 2 == 0)
   {
    sum += c+2;
   }
    }

    printf("%d",sum);
    return 0;

}