//To print natural numbers in order and reverse order
#include<stdio.h>
int natural(int n)
{
 if(n>=1)
  printf("%d",natural(n-1));
  printf("\n");
  return n;
}
int naturalRev(int n)
{
 if( )                          

void main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
printf("List of natural numbers till %d are:",n);
natural(n);
}
