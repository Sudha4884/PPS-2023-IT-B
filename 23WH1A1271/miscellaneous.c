#include <stdio.h>
void inputNumbers(int *arr, int n) {     
    printf("Enter %d numbers:\n", n);     
    for (int i = 0; i < n; ++i) {         
        scanf("%d", &arr[i]);} 
        }  
int Smallest(int *arr, int n) {     
    int smallest = arr[0];     
    for (int i = 1; i < n; ++i) {         
        if (arr[i] < smallest) {             
            smallest = arr[i];         }     }    
             return smallest; 
            }  
int Largest(int *arr, int n) {     
    int largest = arr[0];     
    for (int i = 1; i < n; ++i) {         
        if (arr[i] > largest) {             
            largest = arr[i];         }     }     
            return largest; }  
int cal_Sum(int *arr, int n) {     
    int sum = 0;     
    for (int i = 0; i < n; ++i) {         
        sum += arr[i];}     
        return sum; }  
double cal_Avg(int *arr, int n) {     
    int sum = cal_Sum(arr, n);     
    return (double)sum / n; }  
int main() {
    int n, choice;  
    printf("Enter the number of elements: ");     
    scanf("%d", &n);    
    int numbers[n]; 
    inputNumbers(numbers, n);
    printf("\nMenu:\n");
    printf("1. Find Smallest\n");
    printf("2. Find Largest\n");
    printf("3. Calculate Sum\n");
    printf("4. Calculate Average\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice); 
    switch (choice) {
        case 1:
            printf("Smallest: %d\n", Smallest(numbers, n));
            break;
        case 2:
            printf("Largest: %d\n", Largest(numbers, n));
            break;
        case 3:
            printf("Sum: %d\n", cal_Sum(numbers, n));
            break;
        case 4:
            printf("Average: %.2f\n", cal_Avg(numbers, n));
            break;
        default:
        printf("Invalid. Please choose between 1 and 4:\n");
    }
    return 0;
}
