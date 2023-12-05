#include<stdio.h>
void fibonocci(int);
int main (){
     int num;
     printf("\n Enter the number of terms required in the series");
     scanf("%d",&num);
     fibonocci(num);
     return 0;
}
void fibonocci(int num){
    int a =0;
    int b = 1;
    int i,c;
    printf("%d ",a);
    printf("%d ",b);
     for(i=1;i<=num;i++){
         c=a+b;
         printf("%d ",c);
         a = b;
         b = c;
     }    
}     