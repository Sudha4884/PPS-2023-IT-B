//To find if number is palindrome
#include<stdio.h>
int main(){
    int num,rem,rev = 0,ori_num;
    printf("enter a number: ");
    scanf("%d", &num);
    ori_num = num;

    while(ori_num != 0){
        rem = ori_num % 10;
        rev = rev * 10 + rem;
        ori_num = ori_num / 10;
    }
    if(rev == num){
        printf("%d is a palindrome number", num);
    }else{
        printf("%d is not a palindrome number", num);
    }
}