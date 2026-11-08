#include <stdio.h>
#include "lab1.h"

void helloWorld()
{
	printf("Hello world\n");
}

/* Right-aligned right triangle: row i has (n - i) spaces and i stars. */
void printTriangle(int n)
{
	int row, col;

	for (row = 1; row <= n; row++)
	{
		for (col = 0; col < n - row; col++)
			putchar(' ');
		for (col = 0; col < row; col++)
			putchar('*');
		putchar('\n');
	}
}
