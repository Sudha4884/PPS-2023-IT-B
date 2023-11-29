#include <stdio.h>
void fibonacci(int);
void main(){
int n;
scanf("%d",&n);
fibonacci(n);
}
void fibonacci(int n){
int first=-1,second=1,next;

for(int i = 0;i <= n;i++){
next = first+second;
first = second;
second = next;
printf("%d\n",next);
}
}

