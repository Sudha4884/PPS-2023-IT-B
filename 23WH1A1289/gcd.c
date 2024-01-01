#include <stdio.h>
int Gcd(int ,int);
int RGcd1(int,int);

int RGcd(int,int);
void main(){

int dividend,divisor;
scanf("%d%d",&dividend,&divisor);
printf("%d",RGcd1(dividend,divisor));



}
int Gcd(int x,int y){
int rem;
while(y%x!=0){
rem = y % x;
y= x;
x=rem;
}
return x;
}
int RGcd(int x,int y){
if(x== 0){
return y;
}
else {
return RGcd(y%x,x);
}
}
int RGcd1(int x,int y){
if(x== y){
return y;
}
else if(x>y) {
return RGcd(x-y,y);
}
else {
return RGcd(x,y-x);
}

}



