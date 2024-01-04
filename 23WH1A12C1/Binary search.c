#include<stdio.h>

int binary_search(int a[], int low, int high, int key)
{
	int mid, flag;
	
	flag = 0;
	
	while(low <= high)
	{
		mid = (low + high) / 2;
		
		if(key > a[mid])
		{
			low = mid + 1;
		}
		
		else if(key < a[mid])
		{
			high = mid - 1;
		}
		
		else if(a[mid] == key)
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 1)
		printf("Key element found at position %d\n", mid + 1);
	else
		printf("Key element not found\n");
}

void main()
{
	int n, i, key, low, high, a[10];
	
	printf("Enter the size of the array\n");
	scanf("%d", &n);
	
	printf("Enter %d numbers in ascending order\n", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter the key element to be searched\n");
	scanf("%d", &key);
	
	binary_search(a, 0, n - 1, key);
}
