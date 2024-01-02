// To print all the prime numbers between a given range 
#include<stdio.h>
void main (){
     int max,min,i,j,count;
     printf("Enter the minimum and maximum values");
     scanf("%d%d",&min,&max);
     for(i=min;i<=max;i++){
          count=0;
          for(j=1;j<=i;j++){
             if(i%j==0){
                 count++;
             }    
          }   
          if(count==2)
             printf("\n%d",i);
            
     }         
}     
         
         
     
             