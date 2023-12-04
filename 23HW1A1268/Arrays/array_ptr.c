// To read and print arrays using pointers
#include <stdio.h>

int main() {
   int A[100], n, i,*ptr;
    ptr = A ; 
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
        scanf("%d /n",ptr + i);
    }
    for(i=0; i<n; i++) {
        printf("%d ",*(ptr + i));
    }
    
    return 0;
    
}
