#include<stdio.h>
int checkStrong(int);
void printStrong();
void main (){
     int lb,ub;
     
     printf("\n Enter the lower boundary and upper boundary ");
     scanf("%d%d",&lb,&ub);
     
     
     printStrong(lb,ub);
}
int checkStrong(int num) {
     int remainder,strong=0;
     int number=num,i,fact;
     while(number>0){
         remainder = number%10;
              fact = 1;
             for(i=1;i<=remainder;i++){
              fact=fact*i;
             }
         strong = strong + fact;
         number = number/10;
     }      
     if (strong==num)
         return 1;
     else 
          return 0;
         
}         
void printStrong(int lb,int ub){
     int num;
     for(num=lb;num<=ub;num++){
          if(checkStrong(num))
              printf("%d ",num);
     }
}              