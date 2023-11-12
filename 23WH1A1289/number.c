#include <stdio.h>

int main() {
    int num,num1,num2;

   
    printf("Enter a number: ");
    scanf("%d", &num);

   
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }


    printf("Factorial: %d\n", factorial);

    //GCD
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

  
    int temp;
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    
    printf("GCD: %d\n", num1);

    //x^n
    int exponent;
    double base;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exponent);

   
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

  
    printf("Power: %.2lf\n", result);


    return 0;
}
