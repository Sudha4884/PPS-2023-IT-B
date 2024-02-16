#include <stdio.h>
// Function to calculate GCD using Euclidean algorithmint
 calculateGCD(int a, int b) 
 {
 while (b != 0) 
 {
 int temp = b;
 b = a % b;
 a = temp;
 }
 return a;
 }// Function to calculate LCM using the relationship: LCM(a, b) = (a * b) / GCD(a, b)
 int calculateLCM(int a, int b) 
 {
 return (a * b) / calculateGCD(a, b);
 }
 int main()
  {
  int num1, num2;
  // Input two numbers
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  // Calculate and display GCD and LCM
  int gcd = calculateGCD(num1, num2);
  int lcm = calculateLCM(num1, num2);
  printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
  printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
  return 0;
  }