#include<stdio.h>
void main()
{
int A[10][10],B[10][10],c[10][10],r1,r2,c1,c2,i,j;
printf(" enter no. of rows and cols of A");
scanf("%d%d",&r1,&c1);
printf("enter no.of rows and cols of B");
scanf("%d%d",&r2,&c2);
if(r1==r2&&c1==c2)
printf("\n enter %d elements for A",r1*c1);
for(i=0;i<r1;i++)
for(j=0;j<c1;j++) 
scanf("%d",&A[i][j]);
printf("\n enter %d element for B\n", r2*c2);
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&B[i][j]);
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
C[i][j]=A[i][j]+B[i][j];
printf("%d",C[i][j]);
}
printf("\n");
}
}

