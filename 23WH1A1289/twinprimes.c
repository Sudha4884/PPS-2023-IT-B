#include <stdio.h>
int twinPrime(int,int);
int coPrime(int,int);
void twinprimeseries(int);
void coprimeseries(int);
int prime(int num){
int count = 0;
for(int i = 1;i<= num;i++){
if(num % i ==0){
count++;
}
}
if(count == 2){
return 1;
}else{
return 0;
}
}
void main(){
int number ;
scanf("%d",&number);
printf("-----------------TWIN PRIMES--------------\n");
twinprimeseries(number);
printf("----------------CO PRIMES-----------------\n");
coprimeseries(number);

}

int coprime(int a,int b ){
if(a%b != 0){
return 1;
}
else{
return 0;
}
}
int twinprime(int m,int n){
if(prime(m) && prime(n)){
return 1;
}
else{
return 0;

}
}
void coprimeseries(int number){
for(int i =1;i<= number;i++){
for (int j =1;j<= number;j++){
if(coprime(i,j)){
printf("%d %d\n",i,j);
}
}
}
}
void twinprimeseries(int number){
for(int i = 1;i<=number;i++){
if(twinprime(i,i+2)){
printf("%d%d\n",i,i+2);
}
}
}
