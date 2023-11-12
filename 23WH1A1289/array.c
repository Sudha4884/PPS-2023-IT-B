#include <stdio.h>

int main() {
    int n;

  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

 
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }


    int arr[n];


    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    int min = arr[0];
    int max = arr[0];
    int sum = arr[0];

    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    
    double average = (double)sum / n;

    
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2lf\n", average);

    return 0;
}
