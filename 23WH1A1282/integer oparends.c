//C program which takes two integer operands and one operator from the user, performs the operation and then prints the result
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	char op;
	printf("Enter two integer values: ");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Enter a operand + or - or * or / or %: ");
	scanf("%c",&op);
	switch(op)
	{
		case '+':
			printf("Result is: %d",(a+b));
			break;
		case '-':
			printf("Result is: %d",(a-b));
			break;
		case '*':
			printf("Result is: %d",(a*b));
			break;
		case '/':
			printf("Result is: %d",(a/b));
			break;
		case '%':
			printf("Result is: %d",(a%b));
			break;
		default:
			printf("Invalid operand!");
	}
	getch();
}

