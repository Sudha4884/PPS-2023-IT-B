#include<stdio.h>
int isEvenOrOdd(int);
void main()
{
  int num,res;
  scanf("%d",&num);
  res=isEvenOrOdd(num);
  if(res)
    printf("\n Number is odd");
  else
   printf("\n Number is even");
}
int isEvenOrOdd(int A)
{
  if(A&1)      
    return 1;
  else
    return 0;
}