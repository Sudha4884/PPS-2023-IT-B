// Addding two matrix
#include<stdio.h>
void main ()
{
int A[10][10], B[190][10], C[10][10],r1,c1,r2,c2,i,j;
printf("\n Enter r1,c1");
scanf("%d%d", &r1,&c1);
printf("\n Enter r2,c2");
scanf("%d%d", &r2,&c2);
if(r1 == r2 && c1 == c2)
{
// print A elements
 printf("\n enter %d elements of A", r1*c1);
 for(i=0; i<r1; i++)
 {
   for(j=0; j<c1;j++)
   scanf("%d", &A[i][j]);
 }
// print B elements
printf("\n Enter %d elements of B", r2*c2);
for(i=0; i<r2; i++)
 {
  for(j=0; j<c2; j++)
  scanf("%d", &B[i][j]);
 }
// to print sum
for(i=0; i<r1; i++)
 { 
  for(j=0; j<c1; j++)
  {
   C[i][j] = A[i][j] + B[i][j];
   printf("%4d", C[i][j]);
  }
 printf("\n");
 }
}
else 
 printf("\n Addition of 2 matrices is not possible");
} 