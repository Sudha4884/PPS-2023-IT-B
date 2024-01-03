#include<stdio.h>
void main()
{
    int num,rows,i,mul,a;
    printf("Enter a number and number of rows: ");
    scanf("%d %d",&num,&rows);
    for(i=1;i<=rows;i++)
    {
        mul = num*i;
       printf("%d*%d=%d\n",num,i,mul);
    }
}