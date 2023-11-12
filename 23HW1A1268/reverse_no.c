//To find the reverse of a number
#include<stdio.h>
int main(){
    int num,rem;
    printf("enter a number: ");
    scanf("%d", &num);

    printf("The reverse of the number of: ");
    while(num != 0){
        rem = num % 10;
        printf("%d, ",rem);
        num = num / 10;
    }
}
