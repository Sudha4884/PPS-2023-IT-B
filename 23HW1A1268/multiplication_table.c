//To print a multiplication table
#include<stdio.h>
void main(){
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);

    printf("The multiplication table of %d is", n);
    for(i=0; i<=10; i++){
        printf("%d  x %d = %d \n", n,i,n*i);
    }
}