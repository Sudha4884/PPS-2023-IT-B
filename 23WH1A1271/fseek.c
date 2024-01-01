#include <stdio.h> 
#include <stdlib.h>  
int main(int argc, char *argv[]) {        
if (argc != 12) {         
    printf("Usage: %s <filename> <value1> <value2> ... <value10>\n", argv[0]);         
    return 1; }       
    FILE *file = fopen(argv[1], "wb");    
      if (file == NULL) {         
        perror("Error opening file");         
      return 1;}       
    for (int i = 2; i < argc; ++i) {         
        int value = atoi(argv[i]);         
        fwrite(&value, sizeof(int), 1, file); 
    }  
    fclose(file);  
    file = fopen(argv[1], "r+b");  
    if (file == NULL) {         
        perror("Error opening file");         
        return 1; }  
    int index, newValue;     
    printf("Enter the index (0-9) to change: ");     
    scanf("%d", &index);     
    printf("Enter the new value: ");     
    scanf("%d", &newValue);  
    fseek(file, index * sizeof(int), SEEK_SET);  
    fwrite(&newValue, sizeof(int), 1, file);  
    printf("\nUpdated values in the file:\n");     
    fseek(file, 0, SEEK_SET);     
    for (int i = 0; i < 10; ++i) {         
        int value;         
        fread(&value, sizeof(int), 1, file);         
        printf("%d ", value);     }  
    fclose(file);  
    return 0;
    }