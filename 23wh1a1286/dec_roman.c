#include <stdio.h>  
void decimalToRoman(int num) {     
    if (num < 1 || num > 50) {         
    printf("Number out of range (1 to 50).\n");         
    return;}       
    int decimalValues[] = {1, 4, 5, 9, 10, 40, 50};     
    char* romanSymbols[] = {"I", "IV", "V", "IX", "X", "XL", "L"};  
    for (int i = 6; i >= 0; --i) {         
        while (num >= decimalValues[i]) {             
            printf("%s", romanSymbols[i]);            
             num -= decimalValues[i];         }   
               }  
    printf("\n"); }  
int main() {   
    int num;       
    printf("Enter a number (1 to 50): ");     
    scanf("%d", &num);     
    decimalToRoman(num);  
    return 0; } 