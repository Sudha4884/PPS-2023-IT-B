#include<stdio.h>
struct complex 
{
int real;
int imag;
};
struct complex *cptr,c1;
 
void main (){
     cptr=&c1;
     printf("Enter the real and complex part");
     scanf("%d%d",&cptr->real,&cptr->imag);
     printf("\n %d+(%d)i",cptr->real,cptr->imag);
    
}