#include<stdio.h> 
#include<math.h>  
double GeometricSum(double x, int n) { 
    double sum = 0;  
    for (int i = 0; i <= n; ++i) { 
        sum += pow(x, i); 
    }  
    return sum; 
}  
int main() { 
    double x; 
    int n;  
    printf("Enter the value of x: "); 
    scanf("%lf", &x);  
    printf("Enter the value of n: "); 
    scanf("%d", &n);      
    if (n < 0) { 
        printf("Please enter a non-negative integer for n.\n"); 
        return 1;  
    }  
    double result = GeometricSum(x, n); 
    printf("Sum of the geometric progression: %.2f\n", result);  
    return 0; 
} 