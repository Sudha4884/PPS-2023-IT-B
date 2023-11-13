//Strings
#include<stdio.h>
void main ()
{
char name[100], ch = 'A';
int i = 0;
puts("Enter the para, end with #");
while((ch = getchar( )) != '#')
{
putchar('k');
name[i++] = ch;
}
name[--i] = '\0';
puts(name);
}