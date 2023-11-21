//add the last and first digit of a number
#include<stdio.h>
int main()
{
    int num,l,f,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    l = num % 10;
    while(num != 0)
    {
        f = num % 10;
        num = num / 10;
    }
    sum = l + f;
    printf("%d",sum);

}

/*#include<stdio.h>
#include<math.h>
void main()
{
    int rem,sum,num,rem1,n;
    scanf("%d",&n);
    printf("Enter a number:");
    scanf("\n%d",&num);
    rem = num % 10;
    sum = 0;
    sum = rem;
    rem1 =  ((10^(n-1)) / num);
    sum = sum + rem1;
    printf("%d",sum);
}*/
