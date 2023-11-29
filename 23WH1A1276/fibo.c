#include<stdio.h>
int fibo_series(int num,int num1,int n);
void main()
{
int num,n,num1,c,i;
printf("Enter the first two digits point and number of digits:");
scanf("%d %d %d",&num,&num1,&n);
for(i = 0; i <n; i++)
{
c = fibo_series(num, num1, n);
printf("%d",c);
}
}
int fibo_series(int num,int num1,int n)
{
int c,a=num,b=num1;
a = num1;
b = c;
c = a +b;
return c;

}
