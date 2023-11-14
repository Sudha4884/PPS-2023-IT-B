// To printand read the complex numbers using pointers
#include<stdio.h>
struct complex{
    int real;
    int imaginary;
};
int main(){
    struct complex c1, *cptr = &c1;
    printf("Enter real and imaginary parts \n");
    scanf("%d %d", &cptr->real, &cptr->imaginary);
    printf("complex number is %d+%di", cptr->real, cptr->imaginary );
}