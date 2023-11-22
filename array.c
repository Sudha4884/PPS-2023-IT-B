#include<stdio.h>
void main()
{
int A[10][10],r,c,i,j,n;
printf("\n Enter number of rows,col");
scanf("%d%d",&r,&c);
printf("\n Enter %d elements",r*c);
 for(i=0;i<c;i++)
{
   for(j=0;j<c;j++)
{
      scanf("%d",&A[i][j]);
}
}
  for(i=0;i<r;i++)
{
    for(j=0;j<r;j++)
{
      printf("%4d",A[i][j]);
} printf("\n");
}
   
}

