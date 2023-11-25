#include<stdio.h>
void main (){
    int rows,cols,i,j;
    printf("Enter the number of rows and columns");
    scanf("%d%d",&rows,&cols);
    //Outer loop 
    for(i=1;i<=rows;i++){
       //Inner loop
       for(j=1;j<=cols;j++){
            if(i==1||j==1||i==rows||j==cols){
               printf("%d",j);
            }
            else{
               printf(" ");
            }   
       }        
       printf("\n");    
    }   
}    