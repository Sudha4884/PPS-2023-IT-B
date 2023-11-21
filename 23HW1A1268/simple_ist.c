//To find the simple interest
#include<stdio.h>
void main(){
    float p,n,r,si;
    printf("Enter the principle ,number of days and rate of interest: ");
    scanf("%f %f %f", &p,&n,&r);
    si = (p*n*r)/100.0;
    printf("%f",si);    
}