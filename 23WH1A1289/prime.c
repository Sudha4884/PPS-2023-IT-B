#include <stdio.h>
int main(){
    int i,num;
    int count = 0;
    int sum = 0;
scanf("%d",&num);
      
   for(i=1;i<=num;i++){
    if(num%i ==0){
      count++;
    }
    

   }
   if(count == 2){
        printf("prime");
    } else{
        printf("non prime");
    } return 0;

   
}