#include <stdio.h>
int main(){
    int A[100],n;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    int *ptr;
    ptr = A;
    for(int i=0; i<n; i++){
        printf("enter element %d",i+1);
        
        scanf("%d",A+i);
}
for(int i=0; i<n; i++){
    
    printf("%d ",*(A+i));
}
     int A1[100],n1;
    printf("enter the no of elements\n");
    scanf("%d",&n1);
    int *ptr1;
    ptr1 = A1;
    for(int i=0; i<n1; i++){
        printf("enter element %d\n",i+1);
        
        scanf("%d",A1+i);
}
for(int i=0; i<n1; i++){
    
    printf("%d ",*(A1+i));
}
if(n == n1){
for(int i=0; i<n1; i++){
    printf("sum of the two arrays is %d ",*(A1+i)+*(A+i));
}
}
}
