#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("enter coefficient of x^2\n");
    scanf("%d",&a);
    printf("enter coefficient of x\n");
    scanf("%d",&b);
    printf("enter constant \n");
    scanf("%d",&c);
    printf("%dx^2+%dx+%d\n",a,b,c);
    int root = (-b + pow(b*b-4*a*c,0.5))/2*a;
    int root1 = (-b - pow(b*b-4*a*c,0.5))/2*a;
    printf("%d,%d are the roots of the quadratic equation",root,root1);
    return 0;
}