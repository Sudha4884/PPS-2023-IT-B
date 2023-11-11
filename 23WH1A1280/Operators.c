#include<stdio.h>
int main (){
//post incerment
   int x=10;
   printf("The value of x before post increment is %d",x);
   x = x++;
   printf("\n The value of x after post increment is %d",x);
   //pre increment
   int a = 15;
   printf("\n The value of a before pre increment is %d",a);
   a = ++a;
   printf("\n The value of a after pre increment is %d",a);
   
   //Bitwise Operations
   unsigned int p = 60;
   unsigned int q = 13;
   int r ;
   r = p | q;
   printf("\n%d",r);
   r = p & q;
   printf("\n%d",r);
   r = p ^ q;
   printf("\n%d",r);
   r = p<<2;
   printf("\n%d",r);
   r = p>>2;
   printf("\n%d",r);
   return 0;
}