#include <stdio.h>
 #include <conio.h>
 
 
int main()
{
    int a[1000],i,n,min,max,sum;
    float avg;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
    {
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d\n",max);
    }     
     {
     int num[i];
     printf("enter number: ",i+1);
     scanf("%f",&num[i]);
     sum = sum+num[i];
     avg= sum/n;
     }
     printf("avg: %f ", avg);
    return 0;
}