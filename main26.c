#include <stdio.h>

#define SIZE 10

int sumArr(int *arr, int size) {
    if (size == 0) { return 0; }
    return sumArr(arr + 1, size - 1) + *arr;
}

int main() {
    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("sumArr = %d\n", sumArr(arr, SIZE));
    return 0;
}