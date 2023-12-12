#include <stdio.h>
int main()
{
   int num,r=0,n,p=0;
   long bin=0;
   printf("Enter the number between 0 and 255 \n");
   scanf("%d",&num);
   if(num<0||num>255){
       printf("Number must be between 0 and 255 please enter the valid number");
       }
       n=num;
       while(n>0){
           r=n%2;
           bin+=r*pow(10,p);
           n/=2;
           p++;
           
       }
printf("%d in binary format is %ld\n",num,bin);
    return 0;
}