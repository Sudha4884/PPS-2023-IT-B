//To find the roots of a quadratic equation 
#include<stdio.h>
#include<math.h>
void main (){
    int a,b,c;
    float discriminant,r1,r2,realpart,imagpart;
    printf("The coefficients a,b,c are");
    scanf("%d%d%d",&a,&b,&c);
    
    discriminant= b*b-(4*a*c);
    if(discriminant>0){
         r1 = (-b + sqrt(discriminant))/ (2*a);
         r2 = (-b - sqrt(discriminant))/ (2*a);
         printf("\nr1 is %f and r2 is %f",r1,r2);
    }
    else if(discriminant==0){
         r1=r2= -b/(2*a);
         printf("\nr1 and r2 are equal and is %f",r1);
    }
    else {//Imaginary 
         realpart= -b/(2*a);
         imagpart= sqrt(-discriminant)/(2*a);
         printf("\nr1 = %f+%fi and r2=%f-%fi",realpart,imagpart,realpart,imagpart);
    }
     
}     
         
         
     
             