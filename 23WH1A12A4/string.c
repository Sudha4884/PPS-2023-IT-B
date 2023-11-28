#include<stdio.h>
int main()
{
    char c,str[100],i=0;
    printf("ENTER A CHARECTER:\n");
    scanf("%c",&c);
    printf("ENTER A PARAGRAPH\n");
    while(c!='.')
    {
      scanf("%c",&c);
      str[i]=c;
      i++;
    }
    str[--i]='\0';
    puts(str);
}