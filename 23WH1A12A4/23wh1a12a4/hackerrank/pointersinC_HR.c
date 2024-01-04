#include <stdio.h>

void sum_diff(int *a,int *b)
 {
    int sum, diff;
    sum = *a + *b;
    diff = abs(*a - *b);
    *a = sum;
    *b= diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    sum_diff(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
