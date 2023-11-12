#include <stdio.h>
#include <math.h>
#define G 9.8
int main(){
    int t,h,n,s;
    printf("enter the height of each floor in mts");
    scanf("%d",&s);
    printf("enter number of floors");
    scanf("%d",&n);

    h = n*s;
    t =pow((2*h)/G,0.5);
    printf("the time taken by the particle to reach the ground is %d seconds",t);
    return 0;

}