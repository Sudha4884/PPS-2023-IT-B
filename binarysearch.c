// Online C compiler to run C program online
#include <stdio.h>
int binary_search(int arr[], int low, int high, int k) {  
    while (low <= high) {  
        int mid = low + (high - low) / 2;  
  
        if (arr[mid] == k) {  
            return mid;  
        } else if (arr[mid] < k) {  
            
            return binary_search(arr, mid + 1,high, k);
        } else {  
           
           return binary_search(arr, low, mid - 1, k);
        }  
    }  
  
    return -1;   
}  
  
int main() {  
    int k;
    int arr[] = {1, 3, 5, 7, 9};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    printf("Enter the element to search: ");
    scanf("%d", &k);
  
    int index = binary_search(arr, 0, n - 1, k);  
  
    if (index == -1) {  
        printf("Target not found ");  
    } else {  
        printf("Target found at %d\n", index);  
    }  
  
    return 0;  
}  