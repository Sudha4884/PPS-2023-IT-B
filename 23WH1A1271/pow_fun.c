#include <stdio.h>  
// Recursive function to calculate x^n 
double recursivePower(double x, int n) { 
    if (n == 0) { 
        return 1; 
    } else if (n > 0) { 
        return x * recursivePower(x, n - 1); 
    } else { 
        return 1 / (x * recursivePower(x, -n - 1)); 
    } 
}  
// Non-recursive function to calculate x^n 
double nonRecursivePower(double x, int n) { 
    double result = 1;  
    if (n > 0) { 
        for (int i = 1; i <= n; ++i) { 
            result *= x; 
        } 
    } else if (n < 0) { 
        for (int i = 1; i <= -n; ++i) { 
            result /= x; 
        } 
    }  
    return result; 
}
int main() { 
    double base; 
    int exponent;  
    printf("Enter the base (x): "); 
    scanf("%lf", &base); 
    printf("Enter the exponent (n): "); 
    scanf("%d", &exponent);  
    printf("Recursive Power: %.4f\n", recursivePower(base, exponent));  
    printf("Non-Recursive Power: %.4f\n", nonRecursivePower(base, exponent));    
    return 0; 
} 