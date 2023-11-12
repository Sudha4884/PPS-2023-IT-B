// Finding if a number is prime
#include <stdio.h>
void main(){
    int num,count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i=1;
    while(i<=num){
        if(num % i == 0){
            count++;
        }
        i++;
    }
    if(count==2){
        printf("The number is prime \n");
    }else {
        printf("The number is not prime");
    }
}