#include <stdio.h>
#include <conio.h>
void main()
{
   int a[3][3], b[3][3], c[3][3], i, j;
   clrscr();
   printf("Enter the elements of 3*3 matrix a:  \n");
   for(i = 0; i < 3; i++)
   {
      for(j = 0; j < 3; j++)
      {
     scanf("%d", &a[i][j]);
      }
   }
   printf("Enter the elements of 3*3 matrix b:  \n");
   for(i = 0; i < 3; i++)
   {
      for(j = 0; j < 3; j++)
      {
    scanf("%d", &b[i][j]);
      }
   }
   for(i = 0; i < 3; i++)
   {
      for(j = 0; j < 3; j++)
      {
     c[i][j] = a[i][j] + b[i][j];
      }
   }
   printf("The resultant 3*3 matrix c is \n");
   for(i = 0; i < 3; i++)
   {
      for(j = 0; j < 3; j++)
      {
     printf("%d\t", c[i][j]);
      }
      printf("\n");
   }
   getch();
}