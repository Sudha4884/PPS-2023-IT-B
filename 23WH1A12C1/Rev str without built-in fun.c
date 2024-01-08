#include<stdio.h>

void main()
{
	char str[20], revstr[20];
	int i, j;
	
	printf("Enter a string\n");
	scanf(" %s", str);
	
	i = 0;
	while(str[i] != '\0')
		i++;
	i--;
	
	j = 0;
	while(i >= 0)
	{
		revstr[j] = str[i];
		j++;
		i--;
	}
	revstr[j] = '\0';
	
	printf("The reversed string is: %s\n", revstr);
}
