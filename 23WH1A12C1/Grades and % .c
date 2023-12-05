#include<stdio.h>

int main()
{
    int phy,math,pps;
    float per;
    printf("Enter 3 sub marks: ");
    scanf("%d %d %d", &phy,&math,&pps);
    per=(phy+math+pps)/3.0;
    printf("percentage=%2f \n",per);
    if(per>=90)
     printf("Grade A");
    else if(per>=80)
     printf("Grade B");
    else if(per>=70)
     printf("Grade C");
    else if(per>60)
     printf("Grade D");
    else if(per>=40)
     printf("Grade E");
    else
     printf("Grade F");    
    return 0;
}