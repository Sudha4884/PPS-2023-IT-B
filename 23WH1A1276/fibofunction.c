#include<stdio.h>
int fibo_series(int num,int num1,int n);
void main()
{
int num,n,num1,c,i;
printf("Enter the first two digits point and number of digits:");
scanf("%d %d %d",&num,&num1,&n);
fibo_series(num,num1,n);
}
 
int fibo_series(int num,int num1,int n)
{
    int i,c;
    printf("%d %d",num,num1);
    for(i = 0; i <= n; i++)
    {
        c = num + num1;
        num = num1;
        num1 = c;
        printf("%d ",c);
    }
}