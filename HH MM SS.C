#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Read time in seconds from the user
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and remaining seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Display the time in standard format
    printf("\nTime in standard format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

