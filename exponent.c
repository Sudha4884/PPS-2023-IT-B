#include<stdio.h>
#include<math.h>
void main()
{
    float sign,i,x,sum;
    int n;
    printf("Enter the value of x,n:");
    scanf("%f %d",&x,&n);
    sign = 1;
    sum =0;
    for(i = 0; i < n; i++)
    {
        sum = sum +  ((pow(x,i))/ 2*i);
        sum = sign * sum;
        sign = -sign;
    }
    printf("%d",sum);
}
