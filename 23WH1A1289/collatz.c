#include <stdio.h>
void collatz(int);
void main(){
int num;
scanf("%d",&num);
printf("%d",num);
collatz(num);


}
void collatz(int number){
int count = 0;
while (number!=1){

if(number % 2 ==0){
number = number /2;
}
else{
number = (3*number)+1;
}
count++;
printf("\n%d",number);
}
printf("\n%d number of times ",count+1);
}
