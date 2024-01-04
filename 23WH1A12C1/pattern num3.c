#include <stdio.h>
int main()
 {
   int i, j;
   char input, num = '1';
   printf("Enter an uppercase num you want to print in the last row: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - '1' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", num);
      }
      ++num;
      printf("\n");
   }
   return 0;
}