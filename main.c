/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int month;
   printf("enter month \n");
   scanf("%d",&month);
   switch (month)
   {
       case 1:
       printf("the number of days present in jan is 31");
       break;
       case 2:
       printf("the number of days present in feb is 28");
       break;
       case 3:
       printf("the number of days present in march is 31");
       break;
       case 4:
       printf("the number of days present in april is 30");
       break;
       default: printf("invalid number");
       
   }

    return 0;
}
