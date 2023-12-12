#include <stdio.h>  
int main() 
{ 
 float principal, rate, year, ci; 
 printf("Enter principal: \n"); 
 scanf("%f", &principal); 
 printf("Enter rate: \n"); 
 scanf("%f", &rate);   
 printf("Enter time in years: \n"); 
 scanf("%f", &year); 
 //calculate compound interest 
 ci=principal*((pow((1+rate/100),year)-1)); 
 printf("Compound interest is: %f\n",ci); 
 return 0; 
}