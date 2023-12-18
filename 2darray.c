#include<stdio.h>
void main()
{
int A[10][10],r,c,i,j;
printf("\n"," enter the number of rows[i],col[j]");
scanf("%d%d",&r,&c);
printf("\n enter %d elements",r*c);
for(i=0;i<r;i++)
for(j=0;j<r;j++)
scanf("%d",& A[i][j]);
printf("\n **** \n");
for(i=0;i<r;i++)
{
for(j=0;j<C;J++)
{ 
printf("%d", A[i][j]);
}
printf("\n");
}
}

