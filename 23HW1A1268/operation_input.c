// Performing operations on the given input of operater //
#include<stdio.h>

int main(){
    int a,b;
    char ch;
    printf("enter two numbmers to perform operation: ");
    scanf("%d %d",&a,&b);
    printf("enter the operator: ");
    scanf(" %c", &ch);

    switch(ch){
        case '+': printf("sum is %d", a+b);
        break;
        case '-': printf("differnce is %d", a-b);
        break;
        case '*': printf("product is %d", a*b);
        break;
        case '/': printf("quotient is %d", a/b);
        break;
        case '%': printf("remainder is %d", a%b);
        break;
        default: printf("Can't perform the operation");
    }
    /*if(ch == '+'){
        int sum = a+b;
        printf("The sum is %d", sum);
    }
    else if(ch == '-'){
        int sub = a-b;
        printf("The differnce is %d", sub);
    }
    else if(ch == '*'){
        int pro = a*b;
        printf("The product is %d", pro);
    }
    else if(ch == '/'){
        int quo = a/b;
        printf("The quotient is %d", quo);
    }
    else if(ch == '%'){
        int mod = a%b;
        printf("The remainder is %d", mod);
    }
    else{
        printf("Can't perform the operation");
    }*/
}
