/*#include<stdio.h>
int factorial(int a)
{
    int i,fac;
    for(i = 1; i <=a;i++)
    {
        fac *= i;
    }
    return fac;
}

void main()
{
    int a,sum =0,num,b,n;
    printf("Enter a number:");
    scanf("%d",&a);
    n = a;
    while(a != 0)
    {
        num = a % 10;
        b = factorial(num);
        a = a /10;
        sum += b;
    }
    printf("%d",sum);
    if(sum == n)
    {
        printf("It is a strong number");
    }
    else{
        printf("Not a strong number");
    }
}*/


#include <stdio.h>  
int fact(int);
int main()  
{  
    int n,f;  
    int sum=0;  
    printf("Enter a number:");  
    scanf(" %d",&n);  
    int k=n;  
    int r;  
    while(k!=0)  
    {  
        r=k%10;  
        f=fact(r);  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==n)  
    {  
        printf("\nNumber is a strong");  
    }  
    else  
    {  
        printf("\nNumber is not a strong");  
    }  
    return 0;  
}  
int fact(int r)  
{  
    int mul=1;  
    for(int i=1;i<=r;i++)  
    {  
        mul=mul*i;  
    }  
    return mul;  
      
}  


