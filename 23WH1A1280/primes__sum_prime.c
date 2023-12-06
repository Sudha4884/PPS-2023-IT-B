#include<stdio.h>
int checkPrime(int);
void checkSumPrime();
int main (){
    int ub;
    printf("\n Enter the  upper boundary");
    scanf("%d",&ub);
    checkSumPrime(ub);
    return 0;
}
int checkPrime(int num){
    int factor,count=0;
    for(factor=1;factor<=num;factor++){
         if(num%factor==0)
              count++;
     }
     if(count==2)
          return 1;
     else 
          return 0;
}
void checkSumPrime(int ub){
        int num,sum=0,count=0;
        for(num=3;num<=ub;num++){
             if(checkPrime(num)){
                  sum=sum+num;
                  if(checkPrime(sum)){ 
                       count++;
                   }
              }
         }
         printf("The number of primes which can be expressed as sum of primes is %d",count);
}                         