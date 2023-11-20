#include<stdio.h>
#include<math.h>
int main()
{
    int b,a,c,x,y,d,sd;
    printf("Enter coificients :");
    scanf("%d%d%d",&a,&b,&c);
    printf("equation given : (%d)(x^2)+(%d)(x)+(%d)\n",a,b,c);
    d = (b*b)-4*a*c;
    sd = sqrt(d);
    if (sd >= 0)
    {
        x = (-b+sd)/2*a;
        y = (-b-sd)/2*a;
        printf("x = %d \n y = %d\n",x,y);
    }
    else if (sd <= 0)
    {
        printf("(-%d + _/(%d))\n\t2*%d)\n\n",b,sd,a);
        printf("(-%d - _/(%d))\n\t/2*%d)",b,sd,a);
    }
    
    
}
