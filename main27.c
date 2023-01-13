#include <limits.h>
#include <stdio.h>

#define SIZE  10
#define ERROR INT_MIN

/**
 * @author Tal Jacob
 */
int findMaxElement(int *arr, int size) {
    if (size == 0) { return ERROR; }

    int returnValueOfNextFindMaxElement = findMaxElement(arr + 1, size - 1);
    int maxElement = arr[0] > returnValueOfNextFindMaxElement
                             ? arr[0]
                             : returnValueOfNextFindMaxElement;
    return maxElement;
}

/**
 * @author Yehuda Elmaliahi
 */
int findMaxElementYehuda(int *arr, int size) {
    if (size == 1) { return arr[0]; }

    int returnValueOfNextFindMaxElement =
            findMaxElementYehuda(arr + 1, size - 1);
    int maxElement = arr[0] > returnValueOfNextFindMaxElement
                             ? arr[0]
                             : returnValueOfNextFindMaxElement;
    return maxElement;
}

int main() {
    int arr[SIZE] = {0, 1, 2, 3, 4, 9, 6, 7, 8, 5};
    printf("findMaxElement = %d\n", findMaxElement(arr, SIZE));
    return 0;
}