#include <stdio.h>
#define ROWS 6
#define COLS 6

int main() {
    /*printf("MULTIPLICATION TABLE\n");
    for (int j = 0; j <= COLS; j++) {
        printf("   %d", j);
    }
    printf("\n");
    for (int i = 1; i <=ROWS; i++) {
        printf("%4d", i);
        for (int j = 1; j <= COLS; j++) {
            printf("%4d", i * (j));
        }
        printf("\n");
    }*/
    printf("MULTIPLICATION TABLE\n");
    int n,m;
    printf("enter the number ");
    scanf("%d", &n);
for(int i = 0; i < 11; i++){
    m = n*i;
    printf("%d x %d = %d\n", n,i,m);
}

    return 0;
}
