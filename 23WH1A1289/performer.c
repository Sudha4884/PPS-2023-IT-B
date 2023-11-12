#include <stdio.h>
int main(){

int num,num1;
char operator;
printf("enter two numbers and an operator ");
scanf("%d %d %c",&num,&num1,&operator);
switch(operator){
    case '+': 
    printf("%d",num + num1);
    break;
    case '-': 
    printf("%d",num - num1);
    break;
    case '*': 
    printf("%d",num * num1);
    break;
    case '/': 
    printf("%d",num / num1);
    break;
    case '%': 
    printf("%d",num % num1);
    break;
    default:
    printf("enter a valid operator");
}
    return 0;
}