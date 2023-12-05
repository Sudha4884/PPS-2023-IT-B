#include<stdio.h>
int checkLSB(int);
void main()
{
  int A,res;
  scanf("%d",&A);
  res=checkLSB(A);
  if(res)
    printf("\n LSB is 1");
  else
   printf("LSB is 0");
}
int checkLSB(int A)
{
  int B,nos;
  nos= (sizeof(int)*8)-1;
  B=1;     // for LSB B=1;
  if(A&B)      // #a<b==1 or if(a&b)
    return 1;
  else
    return 0;
}
// lsb 1 means it is 1
// Msb 1 means it depends on size of integer and no.of digits
// finding means & (AND) operator
// setting means // (OR) operator 