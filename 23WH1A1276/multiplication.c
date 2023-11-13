//MULTIPLICATION OF MATRICES
#include<stdio.h>
void main()
{
int i = 0,j = 0,k =0,r,c;
int a[3][3],b[3][3],C[3][3];
printf("Enter the number of rows and columns:");
scanf("%d %d",&r,&c);
printf("Enter the values of  matrix A:");
for(i = 0; i < r;i++)
{
for(j = 0; j < c; j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("Enter the values of materix B:");
for(i = 0; i < r;i++)
{
for(j = 0; j < c; j++)
{
scanf("%d ",&b[i][j]);
}
printf("\n");
}

for(i = 0; i <r; i++)
{
for(j = 0; j < c; j++)
{
for(k = 0;k < r ; k++)
{
C[i][j] = a[i][k] * b[k][j];
printf("%d ",C[i][j]);
}
}
printf("\n");
}
}
