#include<stdio.h>
void main (){
    int A[100],*ptr,i,n,sum=0;
    ptr=A;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",A+i);
    }
    for(i=0;i<n;i++){
       sum=sum+*(A+i) ;
    }
    printf("%d",sum);
}           