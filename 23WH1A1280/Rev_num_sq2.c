#include<stdio.h>
void main (){
    int rows,cols,i,j;
    printf("Enter the number of rows and columns");
    scanf("%d%d",&rows,&cols);
    //Outer loop 
    for(i=1;i<=rows;i++){
       //Inner loop
       if(i%2==0){
           for(j=cols;j>=1;j--){
               printf("%d ",j); 
           }
       }
       else{
           for(j=1;j<=cols;j++){ 
               printf("%d ",j);
           }    
       }      
       printf("\n");    
    }   
}    