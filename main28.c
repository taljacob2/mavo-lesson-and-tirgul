#include <limits.h>
#include <stdio.h>

#define SIZE  10
#define ERROR INT_MIN

/**
 * @author Tal Jacob
 */
int findMaxElement(int *arr, int size) {
    if (size <= 0) { return ERROR; }

    int returnValueOfNextFindMaxElement = findMaxElement(arr + 1, size - 1);
    int maxElement = arr[0] > returnValueOfNextFindMaxElement
                             ? arr[0]
                             : returnValueOfNextFindMaxElement;
    return maxElement;
}

/**
 * @attention unsupported when `size` is "less than or equal" to `0`.
 *
 * @attention Given the `arr` is already sorted!!!
 *
 * @return In case the `element` is found, returns the index of the `element`.
 *         Else returns `-1`.
 * @author Yehuda Elmaliahi / Patched by Tal Jacob.
 */
int findElementByBinarySearchYehuda(int *arr, int size, int element) {

}

int main() {
    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("findMaxElement = %d\n", findElementByBinarySearchYehuda(arr, SIZE));
    return 0;
}