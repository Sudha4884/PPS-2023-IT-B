#include <stdio.h>

int main()
{
    int a[100];
    int n,i;
    int *p=a;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        printf("Enter array element [%d]:",i);
        scanf("%d",p+i);
    }
    printf("Array elements in reverse order: ");
    for (i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
    
}
