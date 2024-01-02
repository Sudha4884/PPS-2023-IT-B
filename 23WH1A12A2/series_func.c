#include<stdio.h>
int factorial(int);
void series();
void main (){
     series();
}
int factorial(int num) {
     int i,fact=1;
     for(i=1;i<=num;i++){
          fact = fact*i;
     }    
     return fact;  
         
}         
void series(){
       int series=0,term,num;
      for(num=1;num<=5;num++){
          term=(factorial(num))/num;
          
          series = series + term;
      }
      printf("The sum of the series is %d",series);    
      
     
}              