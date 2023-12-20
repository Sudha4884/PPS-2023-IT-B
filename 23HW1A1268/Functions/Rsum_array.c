//To find the sum of array elements
#include<stdio.h>
int sumArray(int X[],int n)
{
 if(n==-1)
  return 0;
 else 
  return X[n]+sumArray(X,n-1);
}

int readArray(int X[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&X[i]);
    }
}
void main()
{
 int X[10],n;
 printf("Enter the number of entries");
 scanf("%d",&n);
 readArray(X,n);
 printf("Sum of array elements is %d\n",sumArray(X,n));
}
