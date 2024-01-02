#include<stdio.h>
struct complex
{
int real;
int imag;
}C[10];

 
void main (){
     int i;
     for(i=0;i<10;i++){
         printf("Enter the real and imaginary part");
         scanf("%d%d",&C[i].real,&C[i].imag);
     }
     for(i=0;i<10;i++){
         printf("\n %d+(%d)i",C[i].real,C[i].imag);  
     }
}