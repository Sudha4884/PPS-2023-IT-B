#include  <stdio.h>
int main(){
    int num;
    int rev=0;
    int r;
    printf("enter a number");
    scanf("%d",&num);
    int originalnum = num;
    while(num!=0){
        r = num%10;
        rev = rev*10+r;
        num = num/10;
         }
         if(rev == originalnum){
            printf("%d is a palindrome",originalnum);
         }else{
            printf("%d is not a palindrome",originalnum);
         }
    
}
