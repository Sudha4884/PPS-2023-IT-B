#include<stdio.h>
#include<conio.h>
void main()
{
   int a[3][3], b[3][3], c[3][3], i, j, k;
   clrscr();
   printf("Enter the elements of 3*3 matrix a \n");
   for(i = 0; i < 3; i++)
   {
      for(j = 0; j < 3; j++)
      {
     scanf("%d", &a[i][j]);
      }
   }
   printf("Enter the elements of 3*3 matrix b \n");
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
     c[i][j] = 0;
     for(k = 0; k < 3; k++)
     {
        c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
     }
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
