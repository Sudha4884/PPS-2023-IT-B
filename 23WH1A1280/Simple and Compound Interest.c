//To print the Simple and Compound Interest
#include<stdio.h>
int main (){
     //Simple Interest
     float P,T,R;
     printf("Initial principal balance P is ");
     scanf("%f",&P);
     printf("\n Time period T is ");
     scanf("%f",&T);
     printf("\n Rate of Interest R is ");
     scanf("%f",&R);
     float SI;
     SI = (P*T*R)/100 ;
     printf("Simple Interest is %f",SI);
     float n, CI ;
     printf("\n Value of n is ");
     scanf("%f",&n);
     CI = P*pow(1+(R/(100*n)),n*T);
     printf("%f",CI);
     return 0;
     
 }