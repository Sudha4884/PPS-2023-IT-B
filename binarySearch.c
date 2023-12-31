#include<stdio.h>
int binaryseach(int a[], int n)
{
int low, high, mid, k;
low = 0;
high = n - 1;
while(low <= high)
{
mid = (low + high) / 2;
if (k == a[mid])
return mid;
else if (k < a[mid])
high = mid + 1;
else (k > a[mid]);
low = mid - 1;
}
return - 1;
}
