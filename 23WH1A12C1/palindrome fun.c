#include<stdio.h>
#include<string.h>
int ispalindrome(char str[],int len){
   int left,right;
   right = len - 1;
   left = 0;
   while(left<right){
       if(str[left]!=str[right]){
           return 0;//not palindrome 
       }
       left++;
       right--;
       
   }
   return 1;//Palindrome 
}
int main()
   {
   char str[100];
   printf("Enter the string: ");
   gets(str);
   int len = strlen(str);
   
   if(ispalindrome(str,len)){
       printf("%s is a Palindrome",str);
   }
   else{
       printf("%s is not a Palindrome",str);
   }
   
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    