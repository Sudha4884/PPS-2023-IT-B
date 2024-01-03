/*&//To find the compound interest
#include<stdio.h>
#include<math.h>
void main(){
    float p,n,r,A,ci;
    printf("Enter the principle ,number of days and rate of interest: ");
    scanf("%f %f %f", &p,&n,&r);
    A= p * (pow(1+(r/100),n));
    ci = A - p; 
    printf("%f",ci); 

}*/

#include<stdio.h>
void main(){
    float p,n,r,si;
    printf("Enter the principle ,number of days and rate of interest: ");
    scanf("%f %f %f", &p,&n,&r);
    si = (p*n*r)/100.0;
    printf("%f",si);    
}
