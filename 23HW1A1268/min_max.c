//Finding minimum and maximum of 3 numbers
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b){
        if(a>c){
            printf("Maximum is %d ", a);
            if(b>c){
                printf("Minimum is %d", c);
            }else{
                printf("Minimum is %d", b);
            }
        }
    }
    else if(b>a){
        if(b>c){
            printf("Maximum is %d ", b);
            if(a>c){
                printf("Minimum is %d", a);
            }else{
                printf("Minimum is %d", c);
            }
        }
    }
    else{
        printf("Maximum is %d ", c);
        if(a>b){
            printf("Minimum is %d", b);
        }else{
            printf("Minimum is %d", a);
        }
    }
}