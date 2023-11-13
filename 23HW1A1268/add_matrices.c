// To add 2 matrices
#include<stdio.h>
int main(){
	int i,j,r1,r2,c1,c2,A[5][5],B[5][5],C[5][5];
	printf("Enter the no. of rows and columns of matrix A: ");
	scanf("%d %d", &r1,&c1);
	printf("enter the no. of rows and columns of matrix B: ");
	scanf("%d %d", &r2,&c2);

	printf("Enter elements of matrix A\n");
	for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter elements of matrix B\n");
	for(i=0; i<r2; i++){
		for(j=0; j<c2; j++){
			scanf("%d", &B[i][j]);
		}	
	}
	printf("Sum of matrices is \n");
	for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			printf("%d  ", C[i][j] = A[i][j] + B[i][j]);
		}printf("\n");	
	}
}
