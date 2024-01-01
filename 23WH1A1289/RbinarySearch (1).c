#include <stdio.h>

int readArray(int [], int );

void printArray(int [], int );

int linearSearch(int X[], int n,int key);

int binarySearch(int X[], int n,int key,int low,int high);
int readArray(int X[], int n){

    printf("Enter the size of the array: ");

    scanf("%d", &n);



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
void main(){
int A[100],n,k;

n = readArray(A,n);
scanf("%d",&k);
linearSearch(A,n,k);



}
int linearSearch(int X[], int n,int key){
if(n>=1){
if(X[n-1] == key){
return n-1;
}
else {
return linearSearch( X,n-1,key);
}
}else {return -1; }
}
int binarySearch(int X[], int n,int key,int low,int high){
int mid;
if(low < high){
mid = (low + high)/2;
if(X[mid] == key){
return mid;
}
else if(key > X[mid]) {
return binarySearch( X,n,key,mid+1,high);
}
else {
return binarySearch( X,n,key,low,mid-1);
}

}else {return -1; }
}
 
