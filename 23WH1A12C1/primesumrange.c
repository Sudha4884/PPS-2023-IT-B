#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers satisfying the property in the range 3 to %d:\n", N);

    for (int i = 3; i <= N; ++i) {
        if (is_prime(i)) {
            int sum = 0;
            for (int j = 2; j <= i; ++j) {
                if (is_prime(j)) {
                    sum += j;
                    if (sum == i) {
                        printf("%d = 2", i);
                        for (int k = 3; k <= j; ++k) {
                            if (is_prime(k)) {
                                printf(" + %d", k);
                            }
                        }
                        printf("\n");
                        break;
                    }
                }
            }
        }
    }

    return 0;
}