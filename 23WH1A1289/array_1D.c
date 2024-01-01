#include <stdio.h>

int readArray(int [], int );

void printArray(int [], int );

int linearSearch(int X[], int n,int key);

int binarySearch(int X[], int n,int key);

int bubbleSort(int [],int n);

void selectionSort(int [],int n);
  
void swap(int *,int *);

void main(){

    int Arr[1000];

    int n;

    int key;



    n = readArray(Arr,n);

    printArray(Arr, n);

    printf("array after sorting");

   int count = bubbleSort(Arr,n);
	printf("%d",count);
    
    printArray(Arr,n);

    printf("\nenter the value of key");

    scanf("%d",&key);

    //int search = linearSearch(Arr,n,key);



    int search = binarySearch(Arr,n,key);

    printf("the element %d found at %d",key,search);





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

int bubbleSort(int A[],int n){
int count = 0;
	for(int i = 0;i<n-2;i++){
		for(int j = 0;j<n-i-1;j++){
			if(A[j] > A[j+1]){
				swap(&A[j],&A[j+1]);
				count++;
			}
		}

	}
return count;
}

void swap(int *x,int *y){
int temp = *y;
*y = *x;
*x = temp;

}
