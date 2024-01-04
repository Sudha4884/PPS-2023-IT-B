

// Function prototypes
void displayMenu();
int findSmallest(int numbers[], int n);
int findLargest(int numbers[], int n);
int calculateSum(int numbers[], int n);
float calculateAverage(int numbers[], int n);

int main() {
    int n, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    displayMenu();
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Smallest number: %d\n", findSmallest(numbers, n));
            break;
        case 2:
            printf("Largest number: %d\n", findLargest(numbers, n));
            break;
        case 3:
            printf("Sum of numbers: %d\n", calculateSum(numbers, n));
            break;
        case 4:
            printf("Average of numbers: %.2f\n", calculateAverage(numbers, n));
            break;
        default:
            printf("Invalid choice. Please choose a valid option.\n");
    }

    return 0;
}

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Find Smallest Number\n");
    printf("2. Find Largest Number\n");
    printf("3. Calculate Sum\n");
    printf("4. Calculate Average\n");
}

int findSmallest(int numbers[], int n) {
    int smallest = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    return smallest;
}

int findLargest(int numbers[], int n) {
    int largest = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    return largest;
}

int calculateSum(int numbers[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    return sum;
}

float calculateAverage(int numbers[], int n) {
    return (float)calculateSum(numbers, n) / n;
}