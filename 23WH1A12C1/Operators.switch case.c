#include <stdio.h>
void main()
{
   int a, b, c;
   char ch;
   printf("Enter your operator(+, -, /, *, %): ");
   scanf("%c", &ch);
   printf("Enter the values of a and b\n");
   scanf("%d%d", &a, &b);

   switch(ch)
   {
      case '+': c = a + b;
        printf("addition of two numbers is %d", c);
        break;
      case '-': c = a - b;
         printf("substraction of two numbers is %d", c);
         break;
      case '*': c = a * b;
         printf("multiplication of two numbers is %d", c);
         break;
      case '/': c = a / b;
         printf("quotient of two numbers is %d", c);
         break;
      case '%': c = a % b;
         printf("remainder of two numbers is %d", c);
         break;
      default: printf("Invalid operator");
         break;
   }
}