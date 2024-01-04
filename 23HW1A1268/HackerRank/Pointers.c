#include <stdio.h>
#include<math.h>

void update(int *a,int *b) 
{
    int A,B;
    A = *a + *b;
    B = *a - *b;
    *a = A;
    *b = abs(B);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
