#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int A[] = {a,b,c,d},max=0;
    for(int i=0;i<=4;i++)
    {
        if(max<A[i])
            max = A[i];
    }
    return max;
}
