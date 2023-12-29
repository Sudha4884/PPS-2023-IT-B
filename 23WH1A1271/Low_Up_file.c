#include <stdio.h>
#include <ctype.h>  
int main() {    
    FILE *fs, *ft;     
    char source[100], target[100], ch; 
    printf("Enter the source file name: ");    
    scanf("%s", source);  
    fs = fopen(source, "r");  
    if (fs == NULL) {        
        printf("Error opening source file");         
         return 1; }  
    printf("Enter the target file name: ");     
    scanf("%s", target);  
    ft= fopen(target, "w");  
    if (ft == NULL) {         
    printf("Error opening target file");         
    fclose(fs);        
    return 1; }  
    while ((ch = fgetc(fs)) != EOF) {        
         if (islower(ch)) {            
            ch = toupper(ch);         }         
         fputc(ch, ft);     }  
    fclose(fs);     
    fclose(ft);  
    printf("\n Contents of Source file(%s): \n",source);
    fs = fopen(source, "r");
    while ((ch = getc(fs)) != EOF) { 
            putchar(ch);     }    
    fclose(fs);
    printf("\n Contents of Source file(%s): \n",target);
    ft= fopen(target, "r");
    while ((ch = getc(ft)) != EOF) { 
            putchar(ch);     } 
    printf("\n File copied successfully with lowercase to uppercase conversion.\n");  
    return 0; 
    }