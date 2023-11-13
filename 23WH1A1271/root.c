// TO FIND SQUARE ROOT 
#include<stdio.h>
#include<math.h>
int main ()
{
    float num,res;
    printf("\n Enter a number");
    scanf("%f",&num);
    res = pow(num,0.5);
    printf("\n The  square root of number %.1f is %.1f",num,res);
    return 0;
}