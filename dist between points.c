#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for the coordinates
    float x1, y1, x2, y2;

    // Read input from the user
    printf("Enter coordinates of the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate the distance using the distance formula
    float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // Print the result
    printf("Distance between the two points: %.2f\n", distance);

    return 0;
}

