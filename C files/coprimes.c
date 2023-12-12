#include<stdio.h>
int coprime(int a, int b);
int main()
{
    int n1,n2,gcd;
    printf("\n Enter the two numbers: ");
    scanf("%d%d", &n1,&n2);
    gcd =coprime(n1,n2);
    if(gcd == 1)
    
    {
        printf("%d and %d are coprimes", n1,n2);
    }
    else
    {
        printf("%d and %d are not coprimes",n1,n2);
    }
}
int coprime(int a, int b)
{
int c;
{
while(1) 
 { 
 c = a%b; 
 if(c==0) 
 return b; 
 a = b; 
 b = c; 
 } 
}
}