#include "lab2.h"
#include "arrays.h"

int  checkArray(int arr[], int size){
    int i = 0;
    for (i = 0; i < size - 1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            return 0;
        }

    }

  return 1;
}


int  countCharInMat(char mat[][COLS], int rows, int cols, char target)
{
    int i, j;
    int total = 0; 

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat[i][j] == target) {
                total++;
            }
        }
    }

    return total; 
}

