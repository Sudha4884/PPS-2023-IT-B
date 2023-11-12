#include <stdio.h>

int main() {
    int operand1, operand2;

    printf("Enter the first operand: ");
    scanf("%d", &operand1);
    printf("Enter the second operand: ");
    scanf("%d", &operand2);

    
    printf("\nArithmetic Operators:\n");
    printf("Addition: %d\n", operand1 + operand2);
    printf("Subtraction: %d\n", operand1 - operand2);
    printf("Multiplication: %d\n", operand1 * operand2);
    printf("Division: %d\n", operand1 / operand2);
    printf("Modulus: %d\n", operand1 % operand2);

   
    printf("\nIncrement and Decrement Operators:\n");
    printf("Pre-increment: %d\n", ++operand1);
    printf("Post-increment: %d\n", operand1++);
    printf("Current value after post-increment: %d\n", operand1);

    
    printf("\nRelational Operators:\n");
    printf("Equal to: %d\n", operand1 == operand2);
    printf("Not equal to: %d\n", operand1 != operand2);
    printf("Greater than: %d\n", operand1 > operand2);
    printf("Less than: %d\n", operand1 < operand2);
    printf("Greater than or equal to: %d\n", operand1 >= operand2);
    printf("Less than or equal to: %d\n", operand1 <= operand2);

    
    printf("\nLogical Operators:\n");
    printf("Logical AND: %d\n", (operand1 > 0) && (operand2 > 0));
    printf("Logical OR: %d\n", (operand1 > 0) || (operand2 > 0));
    printf("Logical NOT for the first operand: %d\n", !(operand1 > 0));

    
    printf("\nBitwise Operators:\n");
    printf("Bitwise AND: %d\n", operand1 & operand2);
    printf("Bitwise OR: %d\n", operand1 | operand2);
    printf("Bitwise XOR: %d\n", operand1 ^ operand2);
    printf("Bitwise NOT for the first operand: %d\n", ~operand1);

    return 0;
}
