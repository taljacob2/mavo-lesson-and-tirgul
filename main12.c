#include "Bool.h"
#include <stdio.h>

#define SIZE 4

int sumRow(int arr[SIZE][SIZE], int rowIndexToSum) {
    int sum = 0;
    for (int colIndex = 0; colIndex < SIZE; ++colIndex) {
        sum += arr[rowIndexToSum][colIndex];
    }
    return sum;
}

int sumCol(int arr[SIZE][SIZE], int colIndexToSum) {
    int sum = 0;
    for (int rowIndex = 0; rowIndex < SIZE; ++rowIndex) {
        sum += arr[rowIndex][colIndexToSum];
    }
    return sum;
}

int sumMainDiagonal(int arr[SIZE][SIZE]) {
    int sum = 0;
    for (int rowIndex = 0; rowIndex < SIZE; ++rowIndex) {
        sum += arr[rowIndex][rowIndex];
    }
    return sum;
}

int sumSecondDiagonal(int arr[SIZE][SIZE]) {
    int sum = 0;
    for (int rowIndex = 0; rowIndex < SIZE; ++rowIndex) {
        sum += arr[SIZE - 1 - rowIndex][rowIndex];
    }
    return sum;
}

BOOLEAN isMagicSquare(int arr[SIZE][SIZE]) {
    int sum;

    sum = sumRow(arr, 0);
    for (int i = 1; i < SIZE; ++i) {
        if (sum != sumRow(arr, i)) { return FALSE; }
    }

    for (int i = 0; i < SIZE; ++i) {
        if (sum != sumCol(arr, i)) { return FALSE; }
    }

    if (sum != sumMainDiagonal(arr)) { return FALSE; }

    if (sum != sumSecondDiagonal(arr)) { return FALSE; }

    return TRUE;
}

int main() {
    int arr[SIZE][SIZE] = {{}, {}, {}, {}};
    printf("%d\n", isMagicSquare(arr));

    return 0;
}