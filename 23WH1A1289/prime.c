#include <stdio.h>
int isPrime(int);
void main(){
//int num;
//scanf("%d",&num);
for(int num = 0; num<=100;num++){
int res = isPrime(num);
if(res){
printf("%d\n",num);
//printf("PRIME\n");
}
//else{
//printf("NOT PRIME\n");
}
//}
}
int isPrime(int number){
int count=0;
for(int factor = 1;factor<=number;factor++){
if(number%factor == 0){
count++;
}
}
if(count ==2){
return 1;
}
else{
return 0;
}
}
