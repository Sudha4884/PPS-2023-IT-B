#include<stdio.h>
void main()
{
int a,u,t,t1,t2,i;
float s;
printf("ENTER THE VALUES OF a,u,t,t1,t2: ");
scanf("%d%d%d%d%d",&a,&u,&t,&t1,&t2);
for(i=t1;i<=t2;i=i+t)
{
s=(u*i)+(0.5*a*i*i); // calculate the total distance
printf("\n\nthe distance travelled in %d seconds is %f ",i,s);
}
}