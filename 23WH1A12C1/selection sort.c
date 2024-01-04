#include <stdio.h>

int main()
{
	int Array[50], i, j, temp, Size;
	
	printf("\n Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\n Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &Array[i]);
    }     
	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{
			if(Array[i] < Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
			
		}
	}
	printf("\nArray of Elements in Descending Order are :\n");
	for (i = 0; i < Size; i++)
	{
		printf("%d\t", Array[i]);
	}
	
	return 0;
}