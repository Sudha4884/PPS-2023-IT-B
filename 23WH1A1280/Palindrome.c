// To check whether a number is prime or not 
#include<stdio.h>
void main (){
     int n,sum=0,rem;
     printf("Enter the number_");
     scanf("%d",&n);
     while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
     }
     printf("Sum is %d",sum);   
     int rev=0;
     while(n!=0){
         rem=n%10;
         rev=rev*10+rem;
         n=n/10;
     }
     if(rev==n)
         printf("\nThe number is palindrome");
     else
         printf("The number is not palindrome ");
         
     
 }            