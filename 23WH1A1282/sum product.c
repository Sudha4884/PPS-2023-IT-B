// C Program to Find Sum and Average of 3 Numbers
#include <stdio.h>
int main(){
    int a, b, c, sum;
    float product, avg;
    
    // Asking for input
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    
    // Calculating sum
    sum = a + b + c;
    
    // Calculating average of 3 numbers
    avg = sum / 3;
     // calculation of product
     product= a* b* c ;
    
    // Displaying output
    printf("Sum = %d \n", sum);

    printf("Average = %.2f", avg);
    printf("\n the product of 3 no is:" ,product);
    return 0;
}
