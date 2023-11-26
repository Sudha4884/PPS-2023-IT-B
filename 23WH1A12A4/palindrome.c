//To find if number is palindrome
#include<stdio.h>
int main(){
    int num,rem,rev = 0,sum;
    printf("enter a number: ");
    scanf("%d", &num);
    sum = num;

    while(sum != 0){
        rem = sum % 10;
        rev = rev * 10 + rem;
        sum = sum / 10;
    }
    if(rev == num){
        printf("%d is a palindrome number", num);
    }else{
        printf("%d is not a palindrome number", num);
    }
}