#include <stdio.h>

int readArray(int [], int );
int selectionSort(int [],int n);
void printArray(int [], int );
  
void swap(int *,int *);

void main(){

    int Arr[1000];

    int n;
n = readArray(Arr,n);

    printArray(Arr, n);

    printf("array after sorting");

    int count = selectionSort(Arr,n);

	printf("\n%d",count);
    
    printArray(Arr,n);
}
int selectionSort(int A[],int n){
int count = 0;	
for(int i = 0;i<n-2;i++){
	int min = i;
		for(int j = i+1;j<n;j++){
			if(A[min] > A[j]){
				min = j;
			}
		}
swap(&A[min],&A[i]);
count++;
	}
return count;
}

void swap(int *x,int *y){
int temp = *y;
*y = *x;
*x = temp;


}
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
