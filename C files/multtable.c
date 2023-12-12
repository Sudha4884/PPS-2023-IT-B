#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the rows ");
    scanf("%d", &rows);
    for(int i=1; i<=rows;i++)
    {
        printf("%d * %d = %d\n", 5,i,5*i);
    }
}