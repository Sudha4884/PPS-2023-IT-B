#include <stdio.h>
int vowelConsonant(char);
void main(){
char ch;
scanf("%c",&ch);
int res = vowelConsonant(ch);
if(res){
printf("VOWEL\n");
}
else{
printf("CONSONANT\n");
}



}
int vowelConsonant(char alphabet){
if(alphabet == 'a'||alphabet == 'e'||alphabet == 'i'||alphabet == 'o'||alphabet =='u'||alphabet =='A'||alphabet == 'E'||alphabet == 'I'||
alphabet == 'O'||alphabet =='U'){
return 1;
}
else{return 0;
}
}
