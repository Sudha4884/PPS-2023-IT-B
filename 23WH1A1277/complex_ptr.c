#include<stdio.h>
struct complex
{ 
	int real;
	int imag;

};
void main()
{
	struct complex *cptr, c1;
	cptr = &c1;
	printf("\n enter details of real, imag numbers: ");
	scanf("%d%d", &cptr -> real, &cptr -> imag);
	printf(" %d + (%d)i \n", cptr -> real, cptr -> imag);
}
