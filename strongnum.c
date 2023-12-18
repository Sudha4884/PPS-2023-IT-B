#include<stdio.h>
int factorial(int n)
{
if(n==0 || n==1)
{
return 1;
}
else{
return n*factorial(n-1);
}
}
int isstrongnumber(int num)
{
int original_number=num;
int sum=0;
while(num>0)
{
int digit=num%10;
sum=sum+factorial(digit);
num=num/10;
}

return(sum==original_number);
}
int main(){
int ( number);
printf("enter a number:");
scanf("%d",&number);
if(isstrongnumber){
printf("%d is a strong number\n",number);
}
else{
printf("%d is not a strong number\n",number);
}
return 0;
}
