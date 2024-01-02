// To find the minimum and maximum of the array elements 
#include<stdio.h>
void main (){
     int array[10],i,sum=0;
     for(i=0;i<10;i++){
         printf("\nEnter the array elements");
         scanf("%d",&array[i]);
     }
     for(i=0;i<10;i++){
         printf("%3d",array[i]);
         sum = sum +array[i];
     }
     printf("\nThe sum of array elements is %d",sum);
     float avg;
     avg= sum/10;
     printf("\n The average of array elements is %f",avg);
     int max_element;
     max_element=array[0];
     for(i=0;i<10;i++){
         if(array[i]>max_element)
              max_element=array[i];
     }
     printf("\n Maximum element in the array is %d",max_element);         
     int min_element;
     min_element=array[0];
     for(i=0;i<10;i++){
         if(array[i]<min_element)
              min_element=array[i];
     }         
     printf("\n Minimum element in the array is %d",min_element);
     
}     
     
    
         
         
     
             