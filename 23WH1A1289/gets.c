#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char string[n];
    gets(string);
    printf("%s",string);
    return 0;
}