//To read and print complex numbers using array of structures
#include<stdio.h>
struct complex{
	int real;
	int imaginary;
}c[15];
int main(){
	for(int i=0; i<15; i++){
		printf("Enter real and imaginary part");
		scanf("%d %d", &c[i].real, &c[i].imaginary);
	}
	for(int i=0; i<15; i++){
		printf("Complex number is %d + %di", c[i].real, c[i].imaginary);
	}
}
