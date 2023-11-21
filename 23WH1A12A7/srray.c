#include<stdio.h>
int main(){
    int arr[100],n;
    printf("ENTER THE VALUE OF N:\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS IN ARRAY:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}