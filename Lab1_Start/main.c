#include <stdio.h>
#include "lab1.h"
#define TO_KILO 0.453592

// int getArea(int height, int width);



int main()
{
	
	// float userWeight;
	// int id = 123;
	
	// printf("Please enter your weight in pounds\n");
	// scanf("%f", &userWeight);
	// printf("your weight in kilograms is %.2f \n",userWeight*TO_KILO);
	// printf("%08d \n", id);
	
	int basis;
	
	helloWorld();
	printf("Please enter a number\n");
	scanf("%d", &basis);
	printTriangle(basis);
}

