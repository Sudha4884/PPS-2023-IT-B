#include<stdio.h>
void checkPrime(int)
void main()
{ 
  int num;
  scanf("%d",&num);
  checkprime(num);
}
 void checkprime(int number)
 {
   int factor,count=0;
   for(factor=1;factor<=number;factor++)
   {
     if(number%factor==0)
      {
        count++;
      }
   }
 if(count==2)
 {
   printf("prime");
 }
 else
   printf("not prime");
} 
