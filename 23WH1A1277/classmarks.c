#include <stdio.h>
void main()
{
 int percentage;
 scanf("%d", &percentage);
 if (percentage >= 70)
 printf("Distinction\n");
 else if (percentage >= 60 && percentage < 70)
 printf("First Class\n");
 else if (percentage >= 40 && percentage < 60)
 printf("Second Class\n");
 else
 printf("Failed\n");
}
