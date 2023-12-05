#include<stdio.h>

int main()
{
    int phy,math,pps;
    float per;
    printf("Enter 3 sub marks: ");
    scanf("%d %d %d", &phy,&math,&pps);
    per=(phy+math+pps)/3.0;
    printf("percentage=%2f \n",per);
    if(per>=70)
     printf("Distinction");
    else if(per=60 || per<70)
     printf("First class");
    else if(per=40 || per<60)
     printf("Second class");
    else
     printf("Failed");    
    return 0;
}