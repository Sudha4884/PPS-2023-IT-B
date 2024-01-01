#include <stdio.h> 
#include <math.h>  
double calculateExpression(double x) { 
    return 1 - x / 2 + pow(x, 2) / 4 - pow(x, 3) / 6; 
}  
int main() { 
    double x;  
    printf("Enter the value of x: "); 
    scanf("%lf", &x);  
    double result = calculateExpression(x); 
    printf("Result: %.2f\n", result);  
    return 0; 
}