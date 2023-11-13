#include<stdio.h>
#include<math.h>
void main()
{
    int a,b;
    int l;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    printf("Press 1 for addition\n Press 2 for subtraction\n Press 3 for multiplication\n Press 4 for division\nPress 5 for modular division\n");
    scanf("%d",&l);
    switch(l)
    {
    case 1:
     printf("The sum of two numbers is %d",a+b);
      break;
    case 2:
     printf("The subtraction of two number gives %d",a-b);
     break;
    case 3:
     printf("The multiplication od two numbers is %d",a*b);
     break;
    case 4:
     printf("The division of two numbers gives %d",a/b);
     break;
    case 5:
     printf("The modular division of two numbers gives %d",a%b);
     break;
    case 6:
     printf("The power operation gives % d",a ^ b);
     break;
    default:
     printf("You have pressed wrong number for operation");
    }
    printf("Thank You");

}