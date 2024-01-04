//To find the prime numbers in a range using functions
#include<stdio.h>
void prime(int a,int b);
void main(){
    int x,y;
    printf("Enter the range to find prime numbers: ");
    scanf("%d %d", &x,&y);
    printf("Prime numbers in given range are: \n ");
    prime(x,y);
}
void prime(int a,int b)
{
    int num,count = 0;
    for(num=a; num<=b; num++)
    {
        int i=1;
        while(i<=num)
        {
            if(num % i == 0){
                count++;
            }
            i++;
        }
        if (count == 2)
            {
                printf("%d\n", num);
            }
        count = 0;
    }
}