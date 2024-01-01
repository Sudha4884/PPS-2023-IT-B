#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int sum=0;
  int s1=b*b;
  int s2=4*a*c;
  int s3=s1-s2;
  int sqt=sqrt(s3);
  float r1=(float)(-b+sqt)/(2*a);
  float r2=(float)(-b-sqt)/(2*a);
  printf("%f %f",r1,r2);
  return 0;
}
      

    
