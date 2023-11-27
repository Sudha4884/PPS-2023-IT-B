#include <stdio.h>
int main(){
    int rows= 5,cols=5;
   for(int i = 1; i <rows; i++){
   for(int j = 1; j <i; j++){
   
        printf("* ");
   }
        printf("\n");
    }
   for(int i = rows-1;i>=1;i--){
    for(int j = 1; j <=i; j++){
        printf("* ");
   }printf("\n");
   }
    return 0;
}