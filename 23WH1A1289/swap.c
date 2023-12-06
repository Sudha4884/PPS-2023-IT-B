#include <stdio.h>
void swap(int,int);
void swapref(int *,int *);
void main(){
int a,b,c,d;
printf("enter the values of four numbers\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("-------------------BEFORE SWAPPING------------------------");
printf("\na=%d b=%d c=%d d=%d",a,b,c,d);
swap(a,b);
printf("\n-------------------AFTER SWAPPING-------------------------");
printf("\ncall by value:a=%d b=%d",a,b);//manipulation is performed on the copies of values so original values remain same

swapref(&c,&d);
printf("\ncall by reference:c=%d d=%d",c,d);//original values are changed



}
void swap(int m,int n){
int t = n;
n = m;
m = t;

}
void swapref(int *x,int *y){
int t = *y;
*y = *x;
*x = t;
}

