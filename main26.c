#include <stdio.h>

#define SIZE 10

/**
 * @author Yehuda Elmaliahi
 */
int sumArr(int *arr, int size) {
    if (size == 0) { return 0; }
    return sumArr(arr + 1, size - 1) + *arr;
}

/**
 * @author Tal Jacob
 */
int sumArrReversed(int *arr, int size) {
    if (size == 0) { return 0; }
    return sumArr(arr, size - 1) + arr[size - 1];
}

int main() {
    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("sumArr = %d\n", sumArr(arr, SIZE));
    printf("sumArrReversed = %d\n", sumArrReversed(arr, SIZE));
    return 0;
}