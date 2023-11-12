#include <stdio.h>
int main(){
    int percent;
    printf("enter the percentage of marks obtained ");
    scanf("%d", &percent);
    if(percent >=70)
        printf("Distinction");
    
    else if(percent>60)
        printf("First Class");
    
    else if(percent>40)
        printf("Second Class");
    
    else
     printf("Fail"); 

    return 0;
}