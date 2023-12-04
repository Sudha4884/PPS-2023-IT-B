//To find the maximum element of a matrix
#include<stdio.h>
void main(){
	int r,c,i,j,M[10][10],max=0,min=0;
	printf("Enter the number of rows and columns");
	scanf("%d %d",&r,&c);
	printf("\n enter the elements of matrix ");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d",&M[i][j]);
		}
	}
	printf("\n Matrix is\n ");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ", M[i][j]);
		}printf("\n");
	}
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(max<M[i][j]){
				max = M[i][j];
			}
		}
	}
	printf("Maximum number is %d \n",max);
}
