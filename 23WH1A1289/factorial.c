#include <stdio.h>
int factorial(int number){
int fact = 1;
for (int num =1;num<=number;num++){
fact = fact *num;
}
return fact;
}
void main(){
int i;
//scanf("%d",&number);
//printf("%d",factorial(number));
for(int i = 1;i<=10;i++){
printf("%d\n",factorial(i));
}
}

