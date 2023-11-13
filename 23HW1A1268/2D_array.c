// To read and print a 2D array
#include<stdio.h>
int main(){
	int i,j,r,c,A[5][5];
	printf("enter the number of rows: ");
	scanf("%d", &r);
	printf("enter the number of coulumns: ");
	scanf("%d", &c);
	
	printf("Enter the elements of matrix: ");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &A[i][j]);	
		}
	}
	printf("The matrix is: \n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d  ", A[i][j]);
		}printf("\n");
	}
}
