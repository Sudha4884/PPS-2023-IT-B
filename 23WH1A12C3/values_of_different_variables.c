#include <stdio.h>
int main()
{
	int a;
    short int b;
    long int c;
    long long int d;
    char ch;
    float f;
    double g;
    long double h;
    scanf("%d %hi %ld %lld %c %f %lf %Lf",&a,&b,&c,&d,&ch,&f,&g,&h);
    printf("%d\n%hi\n%ld\n%lld\n%c\n%f\n%lf\n%Lf",a,b,c,d,ch,f,g,h);
}