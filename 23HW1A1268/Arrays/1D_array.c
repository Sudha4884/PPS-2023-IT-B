// To scan and print a 1D array
#include<stdio.h>
void main(){
	int numbers[10];
	printf("Enter the numbers from 1 to 10: ");
	for(int i=1; i<=10; i++){
		scanf("%d", &numbers[i]);
	}
	for(int i=1; i<=10; i++){
		printf("%d", numbers[i]);
	}
}
