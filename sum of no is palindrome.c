#include <stdio.h>
int main() {
  int sum, a,b,reversed = 0, remainder, original;
    printf("Enter a and b values: ");
    scanf("%d%d%d", &sum,&a,&b);
    sum= a+b;

    // reversed integer is stored in reversed variable
    while (sum != 0) {
        remainder = sum % 10;
        reversed = reversed * 10 + remainder;
        sum /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
