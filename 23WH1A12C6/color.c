#include<stdio.h>
 void main()
   int num,int cnt,int i;
{      printf("\n enter the number");
     scanf("%d",&num);
     i=1;
     while(i<=num);
  {  
     if(num%i==0)
     cnt++;
     i++;
}   
    if(cnt==2)
    printf("\n number is prime");
   else
    printf("\n number is not prime");
}
