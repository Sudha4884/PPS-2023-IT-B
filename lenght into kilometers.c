#include <stdio.h>

int main() {
    float lengthInCentimeters, lengthInMeters, lengthInKilometers;

    // Read length in centimeters from the user
    printf("Enter length in centimeters: ");
    scanf("%f", &lengthInCentimeters);

    // Convert centimeters to meters and kilometers
    lengthInMeters = lengthInCentimeters / 100.0;
    lengthInKilometers = lengthInCentimeters / 100000.0;

    // Display the results
    printf("\nLength in meters: %.2f m\n", lengthInMeters);
    printf("Length in kilometers: %.5f km\n", lengthInKilometers);

    return 0;
}

