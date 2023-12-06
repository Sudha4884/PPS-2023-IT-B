#include<stdio.h>
int factorial(int n)
 {
  int fact=1;
  for(int i=1;i<=n;i++)
  {
    fact*=i;
  }
   return fact;
 }
int isStrong(int n)
{ 
  int sum=0,temp=n;
  while(temp>0)
  {
    sum+=factorial(temp%10);
   temp/=10;
  }
  return sum==n;
}
 void findStrongNumbers(int start,int end)
{
  for(int i=start;i<=end;i++)
  {
   if(isStrong(i))
   {
     printf("%d",i);
   }
  }
}
 int main()
{
 int start,end;
  printf("enter start and end of range: ");
  scanf("%d %d ",&start,&end);
  printf("strong numbers b/w %d and %d are: ",start,end);
  findStrongNumbers(start,end);
print("\n");
}
 
  
