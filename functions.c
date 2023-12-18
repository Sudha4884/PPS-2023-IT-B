#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
int is_coprime(int a,int b)
{
return gcd(a,b)==1;
}
void generate coprime_pairs(int start,int end)
{
for(int i=start;i<=end;i++)
{
for(int j=i+1;j<=end;j++)
{
if(is_coprime(i,j))
{
printf("(%d,%d)\n",i,j);
}
}
}
}
int main(){
int start ,end;
printf("enter the range (start end):");
scanf("%d %d",&start,&end);
generate coprime_pairs(start,end);
return 0;
}

