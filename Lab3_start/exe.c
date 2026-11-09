#include <stdio.h>
#include <ctype.h>
#include "functions3.h"
#include "exe.h"
#include "arrays.h"

#define SIZE_OF_ARRAY 5

void q_DivMult()
{
    float num1 ,num2;
    printf("pls enter 2 numbers:\n");
    scanf("%f %f",&num1 ,&num2);

    float mul ,div;
    int res = calc(num1,num2,&mul,&div);

    printf("mul = %f\n",mul);
    if(res)
        printf("div = %f\n",div);
    else
        printf("Error: Division by zero is not allowed\n");
    
    
}

void q_Char()
{
    char pC;
    printf("pls enter a character:\n");
    do{
        scanf("%c",&pC);
    }while(isspace(pC));

    changeChar(&pC);
    printf("changed character = %c\n",pC);

}

void q_Reverse()
{
    int num;
    printf("pls enter a number:\n");
    scanf("%d",&num);   
    int res = reversePositive(&num);
    if(res)
        printf("reversed number = %d\n",num);
    else
        printf("Error: Negative number cannot be reversed\n");



}

void q_Arr_Sum_Evens()
{
    int arr[SIZE_OF_ARRAY];
    int size;
    int pSum;
    int pCount;
    size = sizeof(arr)/sizeof(arr[0]);
	initArray(arr,size);
    sumAndCountEvensInArray(arr,size,&pSum,&pCount);
    printf("Sum of numbers = %d\n",pSum);
    printf("Count of numbers that even is = %d\n",pCount);
}

void q_Arr_Div_SumDig()
{
    int arr[SIZE_OF_ARRAY];
    int size;
    int number;
    int countDiv;
    int countOfSum;
    size = sizeof(arr)/sizeof(arr[0]);
	initArray(arr,size);
    printf("Enter the number to check: ");
    scanf("%d",&number);
    countDivAndDigSumInArray(arr,size,number,&countDiv,&countOfSum);
    printf("Count of numbers divisible by %d = %d\n",number,countDiv);
    printf("Sum of digits of numbers divisible by %d = %d\n",number,countOfSum);
}


