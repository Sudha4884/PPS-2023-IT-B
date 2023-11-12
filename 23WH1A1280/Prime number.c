// To check whether a number is prime or not 
#include<stdio.h>
void main (){
         int n, count,i;
         printf("Enter a number");
         scanf("%d",&n);
         for(i=1;i<=n;i++){
            if(n%i==0){
               count++;
            }
          }
          if(count==2)
             printf("It is a prime number ");
          else 
             printf("It is not a prime number ");
 }            