#include <stdio.h>
#include <string.h>
void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main() {
    char *names[] = {"Trupthi","Duck","Hamster","Tiger","Bunny","Tree","Hope","Kitty","Tan"};
    int numNames = sizeof(names) / sizeof(names[0]);
    printf("Unsorted Names:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s  ", names[i]);
    }
   bubbleSort(names, numNames);
    printf("\nSorted Names (using Bubble Sort):\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s  ", names[i]);
    }
    return 0;
}
