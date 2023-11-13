/*#include<stdio.h>
#include<conio.h>

void main()
{
float x,sum=1,t=1,d;
int i,n;
printf("\n Input the value of x:\n");
scanf("%f",&x);
printf("Input the number of terms:\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
d=(2*i)*(2*i-1);
t=(-t*x*x*)/d;
sum=sum+t;
}
printf("\n the sum=%f \n Number of terms=%d\n value of x=%f\n",sum,n,x);

getch();

}*/


//GEOMETRIC PROGRESSION
#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
   int x,n,sum=0,i;
   start:
   printf("enter the values for x and n:");
   scanf("%d%d",&x,&n);
   if(n>0){
      for(i=0;i<=n;i++){
         sum = sum+pow(x,i);
      }
      printf("The sum of the geometric progression is:%d",sum);
   }
   else{
      printf("not a valid n:%d value",n);
      getch();
      goto start;
   }
}