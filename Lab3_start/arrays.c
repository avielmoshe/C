#include <stdio.h>

#include "arrays.h"


void printArray(const int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Enter value for index %d: ", i);
		scanf("%d", &arr[i]);
	}
}


