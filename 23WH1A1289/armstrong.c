#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num;
    int count = 0;

   
 
    printf("enter a 3 digit number \n");
    scanf("%d",&num);
    int originalnum = num;
   while(num!=0 ){
    num = num/10;
    count++;
   }
    
   printf("number of digits is %d \n",count);
   if(count==3){
    int condition = 0;
    num = originalnum;
  for(int i=0; i<=count; i++){
    int digit = num%10;
    digit = pow(digit,count);
    condition = condition + digit;
    num = num/10;
   } printf("the condition is %d\n", condition);
   if (condition == originalnum) {
            printf("%d is an Armstrong number.\n", originalnum);
        } else {
            printf("%d is not an Armstrong number.\n", originalnum);
        }
   }
    return 0;
}
