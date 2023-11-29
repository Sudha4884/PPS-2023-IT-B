#include <stdio.h>
int isArmstrong(int);
void main(){
int result;
for(int num = 0;num<=1000;num++){
//int num;
//scanf("%d",&num);
result = isArmstrong(num);
if(result){
printf("ARMSTRONG:");
printf("%d\n",num);
}
}
}
int isArmstrong(int number){
int originalnum = number;
int remainder,sum=0;
while(number !=0){
remainder = number % 10;
sum = sum + remainder*remainder*remainder;
number = number/10;
}
if(sum == originalnum){
return 1;
}
else{
return 0;
}
}
