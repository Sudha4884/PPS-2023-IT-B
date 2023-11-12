#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 0;
    int i;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter i: ");
    scanf("%d", &i);

    for (int j = 0; j <= i; j++) {
        sum = sum + pow(x, j);
    }

    printf("Result: %.2lf\n", sum);

    return 0;
}
