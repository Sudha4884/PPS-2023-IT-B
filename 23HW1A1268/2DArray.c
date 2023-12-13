//To read and print a 2D array using functions
#include<stdio.h>
void readMat(int X[][10],int a,int b)
{
 int i,j;
 for(i=0;i<a;i++)
 {
  for(j=0;j<b;j++)
  {
   scanf("%d",&X[i][j]);
  }
 }
}
void printMat(int X[][10],int a,int b)
{
 int i,j;
 for(i=0;i<a;i++)
 {
  for(j=0;j<b;j++)
  {
   printf("%d",X[i][j]);
  }
  printf("\n");
 }
}
void main()
{
 int A[10][10],m,n;
 printf("Enter the numbers of rows and columns:");
 scanf("%d %d",&m,&n);
 readMat(A,m,n); 
 printMat(A,m,n);
}
