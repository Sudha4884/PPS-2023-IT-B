//Input and display array elements 
#include<stdio.h>
int main()
{
int numarray[10],i;
for(i=0;i<10;i++)
{
printf("enter element numbes:%d ",i+1);
scanf("%d",&numarray[i]);
}
printf("the elementsof array : \n");
for(i=0;i<10;i++)
printf("%d\n",numarray[i]);
return 0;
}