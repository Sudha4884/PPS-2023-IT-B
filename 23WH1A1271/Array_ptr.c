#include<stdio.h>
int main()
{
    int A[100],n,i,*ptr;
    ptr = A;
    printf("\n Enter size of array");
    scanf("%d",&n);
    printf("\n Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    printf("\n Elements of Array using pointer");
    for(i=0;i<n;i++){
        printf("%d ", *(ptr+i));
    }
}