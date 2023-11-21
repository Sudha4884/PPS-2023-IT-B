#include<stdio.h>
int main()
{
    int simple_interest;
   // printf("To print the simple interest");
    //int p=14,t=4,r=34;
    int p,t,r;
    scanf("%d%d%d",&p,&t,&r);
    simple_interest=p*t*r/100;
    printf("\t%d",simple_interest);
}