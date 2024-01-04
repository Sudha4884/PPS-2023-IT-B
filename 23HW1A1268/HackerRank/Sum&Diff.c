#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    if(1<=a && a<=10000){
        if(1<=b && b<=10000)
            printf("%d %d\n",a+b,a-b);
    }
    if(1.0<=c && c<=10000.0){
        if(1.0<=b && b<=10000.0)
            printf("%.1f %.1f",c+d,c-d);
    }
    return 0;
}
