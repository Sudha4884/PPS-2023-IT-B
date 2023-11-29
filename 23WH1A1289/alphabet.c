#include <stdio.h>
int alphabet(char);
void main(){
char ch;
scanf("%c",&ch);
int res = alphabet(ch);
if(res){
printf("ALPHABET\n");
}
else{
printf("NOT ALPHABET\n");
}



}
int alphabet(char alpha){
if(alpha >= 65 && alpha <= 90){
return 1;
}
else if(alpha >= 97 && alpha <= 122){
return 1;
}
else{
return 0;
}
}

