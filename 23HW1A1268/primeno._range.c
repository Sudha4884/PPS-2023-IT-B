// To find the prime nos. in a given range
#include<stdio.h>
void main(){
    int num,a,b, count = 0;
    printf("Enter the range to find prime numbers: ");
    scanf("%d%d", &a,&b);
    printf("Prime numbers in given range are: ");
    for(num=1; num<=b; num++;){
        if(num>=a && num<=b){
            int i=1;
            while(i<=num){
                if(num % i == 0){
                count++;
                }
                i++;
            }
        }
    }
}
