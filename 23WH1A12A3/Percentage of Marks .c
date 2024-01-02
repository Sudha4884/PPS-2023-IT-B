#include<stdio.h>
void main() {
    float percentage;
    printf("Enter the percentage of the student");
    scanf("%f",& percentage);
    if(percentage<40)
         printf("You are failed");
    else if(percentage>=40 && percentage<60)
         printf("Second Class");
     else if(percentage>=60 && percentage<70)
          printf("First Class");
     else if(percentage>=70 && percentage<=100)
          printf("Distinction");
    else
         printf("What is your percentage? ");
 }        