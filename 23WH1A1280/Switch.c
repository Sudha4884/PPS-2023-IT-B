#include<stdio.h>
#include<math.h>
void main (){
      int x,y;
      char operator;
      printf("The values of x, y and a char are");
      scanf("%d%d %c",&x,&y,&operator);
      
      switch(operator){
      case '+' : 
             printf("Addition is %d\n",x+y);
             break;
      case '-' :
             printf("Substraction is %d\n",x-y);
             break;
      case '*' : 
             printf("Multiplication is %d\n",x*y);
             break;
      case '/' :
             printf("Division is %d\n",x/y);
             break;
      case '%' :
             printf("Remainder is %d\n",x%y);
             break;
      default :
             printf("Mathematical operations");
       }
}             