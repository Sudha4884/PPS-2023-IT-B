#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
	int i, length = strlen(str),reversestring;
	{
		for(int i =0;1<length/2;i++);
		char temp = str[i];
		str[i] = str[length-i-1];
		str[length-i-1] = temp;
	}
}
  int main()
  {
  	char inputstring[100];
  	printf("enter a string");
  	scanf("%s",inputstring);
  	reversestring (inputstring);
  	printf("reversedstring%s",inputstring);
  	return 0;
  }