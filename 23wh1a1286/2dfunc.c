#include<stdio.h>
void readArray(int [][10],int,int);
void printArray(int [][10],int,int);
void main()
{
int A[10][10],n,m;
scanf("%d%d",&n,&m);
printf("\n Enter %d rows, %d columns no of elements",n,m);
readArray(A,n,m);
printf("\n *********** \n");
printf("\n The 2d matrix is \n");
printArray(A,n,m);
printf(" \n *********** \n");
}
void readArray(int x[][10],int n,int m)
{
for(int i = 0; i<n;i++)
    for(int j = 0; j<m;j++)
        scanf("%d",&x[i][j]);
}
void printArray(int x[][10],int n,int m)
{
for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
      {	printf("%4d",x[i][j]);}
   
   printf("\n");
}
}