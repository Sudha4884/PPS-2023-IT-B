//To find the minimum and maximum of a numbers
#include<stdio.h>
int main(){
    int num[100],min,max,n;
    printf("enter the number of numbers\n");
    scanf("%d", &n);
    printf("Enter numbers you want to compare \n");
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    min=max=num[0];
    for(int i=0; i<n; i++){
        if(min>num[i]){
            min = num[i];
        }
        if(max<num[i]){
            max = num[i];
        }
    }
    printf("Maximum number is %d \n",max);
    printf("Minimum number is %d \n",min);
}
