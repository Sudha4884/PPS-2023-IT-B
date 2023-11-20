#include <stdio.h>
int main(){
    int A[100],n;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    int *ptr;
    ptr = A;
    for(int i=0; i<n; i++){
        printf("enter element %d",i+1);
        ptr = &A[i];
        scanf("%d",ptr);
}
for(int i=0; i<n; i++){
    ptr = &A[i];
    printf("%d ",*ptr);
}
}