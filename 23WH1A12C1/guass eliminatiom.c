/* C Program: Gauss-Elimination Method */
#include<stdio.h>
#include<conio.h>
int main()
{
    float a[10][10],x[10], temp;
    int i,j,k, n;
    printf("\nEnter the Number of equations : ");
    scanf("%d",&n);
    printf("\nThe Number of Equations are : %d\n",n);
    printf("\nNow Enter augmented (coefficients of equ.) matrix\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n+1;j++)
        scanf("%f",&a[i][j]);
    printf("\nAugmented (coefficients of equ.) matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        printf("%6.0f",a[i][j]);
        printf("\n");
    }
    /* Applyying Gauss Jordan Elimination  */
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
        if(i!=j)
           temp = a[j][i]/a[i][i];
        for(k=1;k<=n+1;k++)
            a[j][k]=a[j][k]-(temp*a[i][k]);
        }
    /* obtained solution  */
    for(i=1;i<=n;i++)
       x[i]= a[i][n+1]/a[i][i];
    printf("\nSolution of the equation is :\n");
    for(i=1;i<=n;i++)
        printf("x[%d] = %7.3f\n",i,x[i]);
    return 0;
}