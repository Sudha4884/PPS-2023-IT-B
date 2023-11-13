//To read and print a complex number
#include<stdio.h>
struct complex{
	float imaginary;
	float real;
}c1;
int main(){
	printf("Enter real and imaginary part");
	scanf("\n %f %f", &c1.real, &c1.imaginary);
	printf("The complex no.1 is");
	if(c1.imaginary>0){
		printf("%f + %fi",c1.real,c1.imaginary);
	}else{
		printf("%f %fi", c1.real, c1.imaginary);
	}
	struct complex c2,c3;
	c2.real = 25;
	c2.imaginary = 4.5;
	printf("The complex no.2 is");
	if(c2.imaginary>0){
		printf("%f + %fi",c2.real,c2.imaginary);
	}else{
		printf("%f %fi",c2.real, c2.imaginary);
	}
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;
	printf("The sum of complexes is %f+%fi ",c3.real,c3.imaginary);
}
