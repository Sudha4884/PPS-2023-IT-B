#include<stdio.h>
int main() {     
    int N;  
    printf("Enter the number of elements: ");     
    scanf("%d", &N);  
    int numbers[N];  
    printf("Enter the list of %d numbers:\n", N);     
    for (int i = 0; i < N; ++i) {         
        scanf("%d", &numbers[i]);     }  
    FILE *evenFile = fopen("even.txt", "w");     
    FILE *oddFile = fopen("odd.txt", "w");  
    if (evenFile == NULL || oddFile == NULL) {         
        printf("Error opening files.\n");         
        return 1;}  
    for (int i = 0; i < N; ++i) {         
        if (numbers[i] % 2 == 0) 
            fprintf(evenFile, "%d\n", numbers[i]);         
        else
            fprintf(oddFile, "%d\n", numbers[i]);            
        }  
    fclose(evenFile);     
    fclose(oddFile);  
    printf("Even and odd numbers have been separated and stored in even.txt and odd.txt.\n");  
    printf("\nContents of even.txt:\n");
    evenFile = fopen("even.txt", "r");
    int evenNumber;
    while (fscanf(evenFile, "%d", &evenNumber) == 1) {
        printf("%d  ", evenNumber);
    }
    fclose(evenFile);
    printf("\nContents of odd.txt:\n");
    oddFile = fopen("odd.txt", "r");
    int oddNumber;
    while (fscanf(oddFile, "%d", &oddNumber) == 1) {
        printf("%d  ", oddNumber);
    }
    fclose(oddFile);
    return 0;
    } 