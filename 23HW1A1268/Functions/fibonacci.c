//To print the fibonacci series using function
#include<stdio.h>
void fibonacci(int);

int main()
{
    int num;
    scanf("%d", &num);
    fibonacci(num);
}

void fibonacci(n)
{
    int i,t,t1,t2;
    t1=-1;t2=1;
    t = t1 + t2;
    
    printf("The fibonacci series is: \n ");
    for(i=1; i<=n; i++)
    {
        printf("%d \n", t);
        t1 = t2;
        t2 = t;
        t = t1 + t2;
    }
}