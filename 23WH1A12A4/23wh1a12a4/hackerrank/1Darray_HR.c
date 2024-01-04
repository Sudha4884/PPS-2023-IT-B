#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int a[1000],n=0,i=0,sum =0;
scanf("%d",&n);
for(i=0; i<n; i++) 
    {
        scanf("%d ",&a[i]);
        sum=sum+a[i];
    }
     printf("%d",sum);
    return 0;
}
