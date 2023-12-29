#include<stdio.h>
void main()
{
 int a,b,c, large, small;
 printf("Enter Three Number\n");
 scanf("%d %d %d",&a,&b,&c);
 if(a<b && a<c) 
 { if(b<c) 
 large =c;
 else
 large=b;
 small =a;
 }
printf("%d is largest number\n",large);
printf("%d is Smallest Number ",small);
return 0;
}