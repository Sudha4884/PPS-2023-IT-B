#include<stdio.h>
int checkPrime(int);
void printPrime();
void main (){
     int lb,ub;
     
     printf("\n Enter the lower boundary and upper boundary ");
     scanf("%d%d",&lb,&ub);
     
     
     printPrime(lb,ub);
}
int checkPrime(int num) {
     int factor,count=0;
     for(factor=1;factor<=num;factor++){
          if(num%factor==0)
              count++;
     }      
     if (count==2)
         return 1;
     else 
          return 0;
         
}         
void printPrime(int lb,int ub){
     int num;
     for(num=lb;num<=ub;num++){
          if(checkPrime(num))
              printf("%d ",num);
     }
}              