#include <stdio.h>
void bubblesort(int [],int );
void selectionsort(int [],int );
void insertionsort(int [],int );
void swap(int *,int *);
int readArray(int A[], int n){
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    return n;
}
void printArray(int A[], int n){
    printf("In print array");
    for(int i = 0;i<n;i++){
        printf("%d ",A[i]);
    }
}

void main(){

int X[100],n;
n = readArray(X,n);
insertionsort(X,n);
printArray(X,n);


}
void bubblesort(int A[] ,int n ){

for(int i = 0;i<n-1;i++){
for(int j = 0; j<n-i-1;j++){
if(A[j]>A[j+1]){
swap(&A[j],&A[j+1]);
}
}
}
}
void selectionsort(int A[] ,int n ){
int min,j;
for(int i = 0;i<n-1;i++){
min = i;
for(int j = i+1; j<n;j++){
if(A[min] > A[j]){
min = j;
}
}
swap(&A[min],&A[i]);
}
}

void insertionsort(int A[] ,int n ){
int element,j ;
for(int i = 0;i<n;i++){
j = i-1;
element = A[i];
while(j>0 && A[j]> element){
A[j+1] = A[j];
j--;

}


A[j+1] = element;
}
}
void swap(int *x,int *y){
int temp = *y;
*y = *x;
*x = temp;

}
