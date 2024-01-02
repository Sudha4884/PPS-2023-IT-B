#include<stdio.h>
int main (){
     int a,b,c;
     printf("Enter the values of a,b and c  ");
     scanf("%d%d%d",&a,&b,&c);
     if (a>b && a>c)
        printf("\n A is greater than B and C");
     if(b>c && b>a)
        printf("\n b is greater than a and b");
     if(c>b && c>a)
        printf("\n C is greater than A and B");
     
     return 0;
}  