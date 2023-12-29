#include <stdio.h>  
int main() {     
    int size;     
    printf("Enter the size of the array: ");     
    scanf("%d", &size);  
    int arr[size],*ptr = arr,sum = 0;;  
    printf("Enter %d elements:\n", size);     
    for (int i = 0; i < size; ++i) {   
        scanf("%d", &arr[i]);     }    
    for (int i = 0; i < size; ++i) {
        sum += *(ptr + i);     }  
    printf("Sum of %d elements: %d\n", size, sum);  
    return 0;
    }  