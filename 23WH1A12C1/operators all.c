#include <stdio.h>
int main() 
{
int a,b;
printf("enter a and b values: ");
scanf("%d %d",&a,&b);
// Arithmetic operators
printf("Addition: %d\n", a + b);
printf("Subtraction: %d\n", a - b);
printf("Multiplication: %d\n", a * b);
printf("Division: %d\n", a / b);
printf("Modulus: %d\n", a % b);
// Relational operators
printf("Equal to: %d\n", a == b);
printf("Not equal to: %d\n", a != b);
printf("Greater than: %d\n", a > b);
printf("Less than: %d\n", a < b);
printf("Greater than or equal to: %d\n", a >= b);
printf("Less than or equal to: %d\n", a <= b);
// Logical operators
int x = 1;
int y = 0;
printf("Logical AND: %d\n", x && y);
printf("Logical OR: %d\n", x || y);
printf("Logical NOT for x: %d\n", !x);
printf("Logical NOT for y: %d\n", !y);
// Increment and Decrement operators
int num = 5;
printf("Original value: %d\n", num);
printf("Post-increment: %d\n", num++);
printf("After Post-increment: %d\n", num);
printf("Pre-increment: %d\n", ++num);
printf("After Pre-increment: %d\n", num);
printf("Post-decrement: %d\n", num--);
printf("After Post-decrement: %d\n", num);
printf("Pre-decrement: %d\n", --num);
printf("After Pre-decrement: %d\n", num);
// Assignment operators
int result = 0;
result += 5; // result = result + 5
printf("Assignment operator: %d\n", result);
return 0;
}