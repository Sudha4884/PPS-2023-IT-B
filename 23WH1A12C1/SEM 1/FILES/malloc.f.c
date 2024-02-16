#include <stdio.h>
#include <stdlib.h>
int main() {

   int row = 5, col = 4;
   int *a = (int *)malloc(row * col * sizeof(int));

   int i, j;
   for (i = 0; i < row; i++)
      for (j = 0; j < col; j++)
         *(a + i*col + j) = i + j;    

   printf("The array elements are:\n");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         printf("%d ", *(a + i*col + j));
      }
      printf("\n");
   }
   free(a);
   return 0;
}