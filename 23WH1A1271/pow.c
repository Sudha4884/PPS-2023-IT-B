// to find power of any number x^y
#include <math.h> 
#include <stdio.h> 
 
int main() { 
    double base, exp, result; 
    printf("Enter a base,exponent number: "); 
    scanf("%lf%lf", &base,&exp); 
    // calculates the power 
    result = pow(base, exp); 
    printf("%.1lf^%.1lf = %.2lf", base, exp, result); 
    return 0; 
} 