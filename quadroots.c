#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float  root1,root2,disc;
    printf("Enter the values of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    disc = (b ^ 2) - (4 * a *c);
    if( disc > 0)
    {
        root1 = b + sqrt(disc) / (2*a);
        root2 = b - sqrt(disc) / (2*a);
        printf("%f %f",root1,root2);
    }
    if(disc == 0)
    {
        root1 = (- b )/ (2 * a);
        root2 = root1;
        printf("%f %f",root1,root2);
    }
    else
    {
        printf("The roots are imaginary");
    }
    return 0;
