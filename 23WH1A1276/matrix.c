#include<stdio.h>
void main()
{
 int i,j; 
  int A[2][2];
 printf("Enter the   elements of the array:\n");
 for(i = 0;i < 2;i++)
{
 for(j = 0;j < 2; j++)
 {
   scanf("%d",&A[i][j]);
 }
printf("\n");
}
for(i = 0; i < 2; i++)
{
 for(j = 0; j < 2; j++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}
}	
