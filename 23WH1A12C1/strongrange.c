#include <stdio.h>
long long fact(int x);
void printStrongNumbers(int start, int end);
int main()
{
int start, end;
printf("Enter the lower limit to find strong number: ");
scanf("%d", &start);
printf("Enter the upper limit to find strong number: ");
scanf("%d", &end);
printf("All strong numbers between %d to %d are: \n", start, end);
printStrongNumbers(start, end);
return 0;
}
void printStrongNumbers(int start, int end)
{
long long sum;
int x;

while(start != end)
{
sum = 0;
x = start;

while(x != 0)
{
sum += fact(x % 10);
x /= 10;
}
// If sum of factorial of digits equal to current number
if(start == sum)
{
printf("%d, ", start);
}
start++;
}
}
/* Recursively find factorial of any number */
long long fact(int x)
{
if(x == 0)
return 1;
else
return (x * fact(x-1));
}

