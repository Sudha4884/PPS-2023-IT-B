//MOST SIGINIFICANT DIGIT
#include<stdio.h>
int checkMSB(int a)
{
    int b,nos;
    nos = (sizeof(a)*8)-1;
    b = 1 << nos;
    if(b & a == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a,result;
    printf("Enter a number:");
    scanf("%d",&a);
    result = checkMSB(a);
    printf("%d is MSB ",result);
    return 0;
}