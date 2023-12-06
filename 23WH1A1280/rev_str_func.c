#include<stdio.h>
void revString(char[]);
int main (){
    char s[20]  ;
    printf("\n Enter the  string");
    scanf("%s",s);
    revString(s);
    return 0;
}
void revString(char s[]){
    int length=0,i;
    char temp;
    while(s[length]!='\0'){
          length++;
    }
    printf("The length of the string is %d\n",length);      
    for(i=0;i<(length-1)/2;i++){
         temp = s[i];
         s[i] = s[length-1-i];
         s[length-1-i] = temp;
    }     
     
    printf("The reverse of the string is %s",s);
         
}     
 