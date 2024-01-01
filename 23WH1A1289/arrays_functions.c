#include <stdio.h>
int readArray(int [], int );
void printArray(int [], int );
int maxArray(int [], int  );
int minArray(int [], int  );
int sumArray(int [], int );
int linearSearch(int X[], int n,int key);
int binarySearch(int X[], int n,int key);
void main(){
    int Arr[1000];
    int n;
    int key;

    n = readArray(Arr,n);
    printArray(Arr, n);
    int maximum = maxArray(Arr,n);
    int minimum = minArray(Arr,n);
    int sum = sumArray(Arr,n);
    
    
    printf("\nthe maximum of array is: %d\nthe minimum of arrray is: %d", maximum, minimum);
    printf("\nthe sum of array is: %d\n",sum);
    printf("\nenter the value of key");
    scanf("%d",&key);
    //int search = linearSearch(Arr,n,key);

    int search = binarySearch(Arr,n,key);
    printf("the element %d found at %d",key,search);


}
int readArray(int X[], int n){
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("Invalid size for the array.\n");
        // Handle the error or exit the program
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &X[i]);
    }

    return n;
}
void printArray(int X[], int n){
    printf("In print array");
    
    for(int i = 0;i<n;i++){
        printf("%d ",X[i]);
    }
    
}

int maxArray(int X[], int n){
   int max = X[0];
   printf("\nIn max array");
    for(int i = 0;i<n;i++){
        if(X[i]>max){
            max = X[i];
        }
    }
    return max;
}
int minArray(int X[], int n){
   int min = X[0];
   printf("\nIn min array");
    for(int i = 0;i<n;i++){
        if(X[i]<min){
            min = X[i];
        }
    }
    return min;
}
int sumArray(int X[], int n){
    int sum = 0;
    printf("\nIn sum array");
    for(int i = 0;i<n;i++){
        sum = sum + X[i];
    }
    return sum;
}
int linearSearch(int X[], int n,int key){
for(int i = 0;i<n;i++){
if(X[i]==key){
    return i;
}
}
return -1;
}

int binarySearch(int X[], int n, int key) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid =(high+low)/2;//low + (high - low) / 2; // Correct way to calculate mid

        if (X[mid] == key) {
            return mid;
        } else if (key > X[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}