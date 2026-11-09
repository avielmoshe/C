#include "functions3.h"


int	calc(float n1,float n2,float* pMull,float* pDiv)
{
    *pMull = n1 * n2;

    if(n2 == 0)
        return 0; // Division by zero is not allowed
    else
       *pDiv = n1 / n2;

    return 1;

}

void changeChar(char* pC)
{
    char originalValue = *pC;
    if (originalValue>= 'a' && originalValue <= 'z')
    {
        *pC = 'O';
    }
    else if (originalValue >= 'A' && originalValue <= 'Z')
    {
        *pC = 'S';
    }
    else if (originalValue >= '0' && originalValue <= '9')
    {
        *pC = 'C';
    }
    else
    {
        *pC = 'D';
    }
}

int reversePositive(int* pNum) {
    int num = *pNum;
    int reversed = 0;

    if (num <= 0) {
        return 0; 
    }

    while (num > 0) {
        int rightDigit = num % 10;        
        reversed = (reversed * 10) + rightDigit;
        num = num / 10;                 
    }

    *pNum = reversed;

    return 1;
}

void sumAndCountEvensInArray(int arr[],int size,int* pSum,int* pCount)
{
    int sum = 0;
    int count = 0;
    int i = 0;
    for ( i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            count++;
        sum = sum + arr[i];
    }
    *pSum = sum;
    *pCount = count;
}

void countDivAndDigSumInArray(int* arr,int size ,int number,int* countDiv,int* countOfSum)
{
    int count = 0;
    int countOfSumNum = 0;
    int i = 0;
    for ( i = 0; i < size; i++,arr++){
        if (*arr % number == 0)
        {
            count++;
        }
        if(sumDig(*arr) == number)
        {
            countOfSum++;
        }
        *countDiv = count;
        *countOfSum = countOfSumNum;
        
    }
}

int	sumDig(int num)
{
    int sum = 0;
    while(num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}
