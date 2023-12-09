#include<stdio.h>
int alpha(char);
void main()
{
    char CH;
    scanf("%c",&CH);
    int res;
    res = alpha(CH);
    if(res)
        printf("\n The given character is Alphabet");
    else
        printf("\n The given character is not Alphabet");
}
int alpha(char ch)
{
    if( 65<=ch && ch<=90 || 97<=ch && ch<=122)
        return 1;
    else
        return 0;
}