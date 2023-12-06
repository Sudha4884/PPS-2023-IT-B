#include<stdio.h>
int main()
{
    int num1, num2, rem, sum = 0;
    printf("Enter a three digit number: ");
    scanf("%d", &num1);
    num2 = num1;
    while (num2 != 0)
{
    rem = num2 % 10;
    sum += rem * rem * rem;
    num2 / 10;
}
    if
    (sum == num1)
    printf("%d is an Amstrong number .", num1);
    else
    printf("%d is not an Amstrong number .", num1);
    return 0;
} 