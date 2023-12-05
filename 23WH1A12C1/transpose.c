#include<stdio.h>
int main()
{
 int a[10][10],t[10][10],r,c,i,j;
 printf("enter no.of rows and columns: ");
 scanf("%d %d", &r,&c);
 printf("enter %d elements: ",r*c);
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   scanf("%d",&a[i][j]);
 }
   {
   printf("\n transpose matrix: \n ");
   }
  
 
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
    t[i][j]=a[j][i];
    printf(" %5d ", t[i][j]);
    if(j==c-1)
     printf(" \n ");
   }
  }
 }
 