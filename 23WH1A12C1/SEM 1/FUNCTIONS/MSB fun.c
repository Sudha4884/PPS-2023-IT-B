#include<stdio.h>
int checkMSB(int);
void main()
{
  int A,res;
  scanf("%d",&A);
  res=checkMSB(A);
  if(res)
    printf("\n MSB is 1");
  else
   printf("MSB is 0");
}
int checkMSB(int A)
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