#include<stdio.h>
void main()
{
    int num;
    char ch;
    float f;
    double d;
    printf("Enter a integer,character,float,double:");
    scanf("%d %c %f %lf",&num,&ch,&f,&d);
    printf("%d \n %c\n %f \n%lf",num,ch,f,d);

}