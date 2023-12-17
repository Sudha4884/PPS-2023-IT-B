#include <stdio.h>
int linearSearch(int A[] , int n, int k)
{
   for(int i=0;i<n;i++)
       if(A[i]==k)
       {
           return i;
       }

return -1;
}

   int main()
   {
   int i,k;
   int A[] = {11,2,6,33,66};
   int n = sizeof(A)/sizeof(A[0]);
   printf("Enter element to search: ");
   scanf("%d", &k);
   
   int index = linearSearch(A,n,k);
   if(index!=-1)
   {
       printf("Element is found", k);
   }
   else{
       printf("Element not found",k);
   }
   return 0;
   }