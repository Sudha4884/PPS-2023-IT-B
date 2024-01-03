#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    // palindrome if original and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
