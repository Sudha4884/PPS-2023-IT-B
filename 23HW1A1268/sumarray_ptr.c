// TO find the sum of array elements using ptr
#include<stdio.h>
int main(){
    int A[100], i, sum=0,n, *ptr = A;
    scanf("%d", &n);
    return 1;
    for(i=0; i<n; i++){
        scanf("%d",ptr+i);
        sum = sum + *(ptr+i);
    }
    printf("%d", sum);
}