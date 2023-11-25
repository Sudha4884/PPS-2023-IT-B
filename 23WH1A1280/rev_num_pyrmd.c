#include<stdio.h>
void main (){
    int rows,cols,i,j;
    printf("Enter the number of rows and columns");
    scanf("%d%d",&rows,&cols);
    //Outer loop 
    for(i=1;i<=rows;i++){
       //Inner loop
       for(j=cols;j>=i;j--){
            printf("%d ",j);
       }        
       printf("\n");    
    }   
}    