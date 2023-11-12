#include <stdio.h>

int main() {
    int i, j, num;
    printf("Enter the limit:\n");
    scanf("%d", &num);

    for (j = 2; j <= num; j++) {
        int count = 0; 

        for (i = 1; i <= j; i++) {
            if (j % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", j);
        }
    }

    return 0;
}
