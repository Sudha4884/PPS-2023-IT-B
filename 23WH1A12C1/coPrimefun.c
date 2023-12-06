#include<stdio.h>
void coPrimes(int lower,int upper)
{
  int i,j;
for(i=lower;i<=upper;i++)
 {
 	for(int j=i+1;j<=upper;j++)
            {
  		if((j%i)!=0) 
  	          {
   			printf("\n%d %d",i,j);
  		  }
 	    }
 }
}
int main()
{
 int lb,ub;
 printf("enter first and last number: ");
 scanf("%d%d",&lb,&ub);
coPrimes(lb,ub);
 return 0;
}

