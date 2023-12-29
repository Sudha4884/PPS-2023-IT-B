#include <stdio.h>  
int main() {     
    int A[100],size,*ptr; 
    ptr = A;   
    printf("Enter the size of the array: ");   
    scanf("%d", &size);         
    printf("Enter %d elements:\n", size);    
    for (int i = 0; i < size;i++) {
        scanf("%d", ptr + i);     }
    ptr=&A[size-1];
    printf("Array values in reverse order using pointers:\n");     
    for (int i = 0; i < size;i++) {    
        printf("%d ", *(ptr--));     }     
    return 0; 
} 