#include <stdio.h>
#include <ctype.h>
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

void printMat(char mat[][COLS], int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			printf("%c ", mat[i][j]);
		printf("\n");
	}
}

void initMat(char mat[][COLS], int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("Enter char for [%d][%d]: ", i, j);
			scanf(" %c", &mat[i][j]);	/* leading space skips whitespace/newline */
		}
	}
}
