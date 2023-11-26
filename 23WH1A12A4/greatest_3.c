//Finding the greatest number among 3 
#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b){
        if(a>c){
        printf("%d is greatest among all three", a);
        }else{
            printf("%d is greatest among all three", c);
        }
    }
    else if(b>a){
        if(b>c){
        printf("%d is greatest among all three", b);
        }else{
            printf("%d is greatest among all three", c);
        }
    }
}