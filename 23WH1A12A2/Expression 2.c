//Evaluating the expression 
#include<stdio.h>
#include<math.h>
void main (){
    int x,i,n,total=0,power;
    printf("The value of x is ");
    scanf("%d",&x);
    printf("\nThe value of the power n is");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        power=pow(x,i) ;
        total=total+power;
    }
    printf("\n%d", total);    
    
     
}     
         
         
     
             