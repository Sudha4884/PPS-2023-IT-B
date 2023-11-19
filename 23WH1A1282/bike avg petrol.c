#include <stdio.h>

int main() {
    // Declare variables
    int totalDistance;
    float spentFuel, averageConsumption;

    // Read input from the user
    printf("Enter total distance traveled (in km): ");
    scanf("%d", &totalDistance);

    printf("Enter the amount of fuel spent (in liters): ");
    scanf("%f", &spentFuel);

    // Calculate average consumption
    averageConsumption = totalDistance / spentFuel;

    // Print the result
    printf("Average Consumption: %.2f km/l\n", averageConsumption);

    return 0;
}

