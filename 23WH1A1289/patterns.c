#include <stdio.h>
int main(){
    int rows = 5,cols=5;
for(int i = 1; i <=rows; i++){
    for(int j = 1; j <=cols;j++) {
        printf("* ");
}
printf("\n");
}
for(int i = 1; i <=rows; i++) {
    for(int j = 1; j <=i; j++){
        printf("* ");
    }
    printf("\n");
    }
    for(int i = 1; i <=rows; i++) {
    for(int j = 1; j <=i; j++){
        printf("%d ",i);
    }
    printf("\n");
    }
        for(int i = 1; i <=rows; i++) {
    for(int j = 1; j <=i; j++){
        printf("%d ",j);
    }
    printf("\n");
    }
   int k = 1;
        for(int i = 1; i <=rows; i++) {
    for(int j = 1; j <=i; j++){
        
        printf("%d ",k++);
        
    }
    printf("\n");
    }
    for(int i = 1; i <=rows; i++){
    for(int j = 1; j <=cols;j++) {
        if(i==1||j==1||i==rows||j==rows)  {
        printf("* ");
} else{
    printf("  ");
}
    }
printf("\n");
}
return 0;
}