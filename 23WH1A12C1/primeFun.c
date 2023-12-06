#include<stdio.h>
int checkPrime(int num)
{
 int count=0;
 if(num==1)
 {
  count=1;
 }
 for(int i=2;i<=num/2;i++)
  {
    if(num%i==0)
   {
     count=1;
     break;
   }
  }
  return count;
} 
  int main()
{
  int num;
  printf("enter a number: ");
  scanf("%d",&num);
  if(checkPrime(num)==0)
  {
    printf("\nPRIME NUMBER");
  } 
  else   
    printf("\n NOT A PRIME NUMBER");
  return 0;
}
 
