//To find the armstrong number
#include<stdio.h>
#include<math.h>
void main()
{
    int num,rem,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int original_num = num;

    while(original_num!=0)
    {
        rem = original_num % 10;
        sum = sum + pow(rem,3);
        original_num = original_num / 10;
    }
    if(sum == num)
    {
        printf("%d is an armstrong number",num);
    }
    else 
    {
        printf("%d is not armstrong number",num);
    }
}
