#include "exe.h"
#include <stdio.h>
#include "arrays.h"
#include "lab2.h"
#define ARR_SIZE 5
#define ROWS 3

void q1_A()
{
	int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    if (checkArray(arr, size))
        printf("The array is sorted.\n");
    else
        printf("The array is not sorted.\n");

}

void q1_B()
{
	int arr[ARR_SIZE];
    initArray(arr,ARR_SIZE);
    printArray(arr, ARR_SIZE);
    if (checkArray(arr, ARR_SIZE))
        printf("The array is sorted.\n");
    else
        printf("The array is not sorted.\n");

}

void q2()
{
    char M[ROWS][COLS];
	initMat(M,ROWS,COLS);
    printMat(M,ROWS,COLS);

}
