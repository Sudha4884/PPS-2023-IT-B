//2-D Array
#include<stdio.h>
void main ()
{
int A[10][10],r,c,i,j;
printf("\n Enter the number of rows and coulmn");
scanf("%d%d", &r, &c);
printf("\n Enter %d elements", r*c);
for(i=0; i < r; i++)
{
 for(j = 0; j <c; j++)
  scanf("%d",&A[i][j]);
}
printf("\n ***************** \n");
for(i=0; i<r; i++)
{
  for(j = 0; j<c;j++)
  printf("%4d", A[i][j]);
printf("\n");
}
}