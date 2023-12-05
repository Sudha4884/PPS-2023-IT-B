#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a == 2) {
       printf("It's a Prime number");
    }
    int i;
    for (i = 2; i < a; i++) {
        b = a % i;
        if (b == 0) {
            printf("It's Not a prime number");
            break;
        } 
        else if (i == a - 1) {
            printf("It's a Prime number");
        }
    }

    return 0;
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
    