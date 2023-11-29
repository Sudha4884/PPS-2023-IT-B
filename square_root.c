#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,det,r1,r2,dis;
 printf("Enter a,b,c values : ");
  scanf("%d%d%d",&a,&b,&c);

  dis=b*b-(4*a*c);
  
    if(dis==0){
      printf("Roots are real and distinct");
      r1=-b/(2*a);
      r2=-b/(2*a);
    }
    
   else if(dis>0)
    {
    printf("Roots are real and equal");
       r1=-b+ sqrt(b*b-4*a*c)/(2*a);
       r2=-b-sqrt(b*b-4*a*c)/(2*a);
        }
        
   else
     {
      printf("Roots are imaginary ");
      }
  printf("Roots are %d,%d",r1,r2);
  return 0;
}
