//To multiply two matrices
#include<stdio.h>
int main(){
	int i,j,r1,r2,c1,c2,M[5][5];
	printf("Enter the no. of rows and columns of matrix A: \n ");
	scanf("%d %d", &r1,&c1);

    printf("Enter elements of matrix A\n");
	for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			scanf("%d", &M[i][j]);
		}
	}
    for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			printf("%d ", M[i][j]);
		}printf("\n");
	}
    printf("Transpose of matrix is \n");
    for(j=0; j<r1; j++){
		for(i=0; i<c1; i++){
			printf("%d  ", M[i][j]);
		}printf("\n");
	}
}