#include <stdio.h>  
// Recursive function to calculate GCD 
int recursiveGCD(int a, int b) { 
    if (b == 0) { 
        return a; 
    } else { 
        return recursiveGCD(b, a % b); 
    } 
}  
// Non-recursive function to calculate GCD 
int nonRecursiveGCD(int a, int b) { 
    while (b != 0) { 
        int temp = b; 
        b = a % b; 
        a = temp; 
    } 
    return a; 
}  
int main() { 
    int num1, num2; 
    printf("Enter two integers: "); 
    scanf("%d %d", &num1, &num2);  
    printf("Recursive GCD: %d\n", recursiveGCD(num1, num2));   
    printf("Non-Recursive GCD: %d\n", nonRecursiveGCD(num1, num2));  
    return 0; 
} 