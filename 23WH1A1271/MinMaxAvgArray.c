#include<stdio.h>
void main ()
{
    int marks[7],n,i,max,min,sum =0,index;
    float avg;
    index = 0;
    printf("\n Enter n student marks");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("\n the max, min and avg values of");
    // MAX MARKS
    max = marks[0];
    for(i=0; i<n; i++)
    {
        if(marks[i]> max)
        {
            max = marks[i];
            index = i;
        }
        printf("%5d", marks[i]);
    }
    printf("\n Max mark is %d found at position %1d", max,index);
// MIN MARKS    
    min = marks[0];
    for(i=0; i<n; i++)
    {
        if(marks[i] <= min)
        {
            min = marks[i];
            index = i;
        }
    }
    printf("\n Min mark is %d found at position %d", min,index);
// AVG marks 
for(i=0; i<n;i++)
{
    sum = sum + marks[i];
}
avg = sum/n;
printf("\n The average of marks is %f", avg);
}