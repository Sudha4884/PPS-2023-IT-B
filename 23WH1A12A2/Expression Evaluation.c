#include<stdio.h>
#include<math.h>
void main(){
    //Building has 10 floors of floor height 3 meters each 
    int s=30;//10×3=39 meters
    //Ball is dropped from the top of the building. So initial velocity u is 0;
    float u = 0.00;
    // a is acceleration due to gravity
    float a = 9.8;
    //s=u*t + (1/2)a*t*t
    //To find the time taken
    float t;
    t = sqrt(2*s/a);//u is 0 
    printf("%f",t);

     
 }       
     