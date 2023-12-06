#include<stdio.h>
int checkprime(int);
void printprimes(int, int);
int main()
{
int num, l, u;
printf("\n Enter the Number:");
scanf("%d %d", &l, &u);
printprimes(l,u);
return 0;
}
int checkprime(int number)
{
int factor, count = 0;
for(factor = 1; factor <= number; factor++)
{
if (number % factor == 0)
count++;
}
{
if(count == 2)
return 1;
else
return 0 ;
}
}
void printprimes(int lb, int ub)
{
int num, res;
printf("\n the primesss beetween %d and %d are\n", lb, ub);
for(num = lb; num <= ub; num++)
{
if (checkprime(num))
{
printf("%d\n", num);
}
}
}
