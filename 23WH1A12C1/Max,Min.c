#include<stdio.h> 
int main() 
{ 
int a,b,c,max,min; 
printf("Enter three numbers: "); 
scanf("%d%d%d",&a,&b,&c);    //Input the three numbers 
printf("\n"); 
max=(a>b)?((a>c)?a:c):((b>c)?b:c);  //Check the maximum number by ternary operator 
printf("%d is maximum value ",max); 
min=(a<b)?((a<c)?a:c):((b<c)?b:c);  //Check the minimum number by ternary operator 
printf("\n%d is minimum value",min);
return 0;
}