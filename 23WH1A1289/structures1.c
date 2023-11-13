#include <stdio.h>
struct complex {
int real,imag;
} *cptr,c;
void  main(){

cptr = &c;
printf("enter the real and imaginary parts\n");
scanf("%d%d",&cptr->real,&cptr->imag);
printf("\n%d +(%d)i",cptr->real,cptr->imag);

}
