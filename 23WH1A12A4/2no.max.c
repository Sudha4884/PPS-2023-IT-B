#include<stdio.h>
int main()
{
int num;
float pi;
char ch;
double dou;

printf("enter the variables of num, pi, ch,dou : ");
scanf("%d %f %c %lf", &num, &pi, &ch, &dou );
printf(" %d %f %c %lf ", num,pi,ch,dou);
    return 0;
}
    