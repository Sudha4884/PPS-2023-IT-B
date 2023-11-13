#include<stdio.h>
void main()
{
int A[10][10],r,c,i,j;
printf("\n enter the no. of rows and cols");
scanf("%d%d",&r,&c);
printf("\n enter %d elements",r*c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&A[i][j]);
printf("\n******\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",A[i][j]);
}
printf("\n");
}
}
