//To read and print complex numbers using array of structures
#include<stdio.h>
struct complex{
	int real;
	int imaginary;
}c[15];
int main(){
	int n;
	printf("Enter the number of complex numbers \n");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("Enter real and imaginary part \n");
		scanf("%d %d", &c[i].real, &c[i].imaginary);
	}
	for(int i=0; i<n; i++){
		printf("Complex number is %d + %di \n", c[i].real, c[i].imaginary);
	}
}
