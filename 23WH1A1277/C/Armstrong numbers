#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum,x;
    printf("enter num: ");
    scanf("%d",&num);
    sum = 0;
    x = num;
    while(x!=0)
    {
        rem = x%10;
        sum = sum + (rem*rem*rem);
        x = x/10;
    }
    if (sum == num)
    {
        printf(" %d Armstrong numer",num);
    }
    else 
    {
        printf(" %d Not an Armstrong number",num);
    }
}
