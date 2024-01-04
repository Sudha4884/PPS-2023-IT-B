#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch,s[100],sen[100];
scanf("%c", &ch);
printf("%c\n",ch);

scanf("%s\n", &s);
printf("%s",s);

scanf("%[^\n]%*c", &sen);
printf("\n%s",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
