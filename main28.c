#include <limits.h>
#include <stdio.h>

#define SIZE  10
#define ERROR INT_MIN

/**
 * @attention unsupported when `size` is "less than or equal" to `0`.
 *
 * @attention Given the `arr` is already sorted!!!
 *
 * @return In case the `element` is found, returns the index of the `element`.
 *         Else returns `-1`.
 * @author Tal Jacob.
 */
int findElementByBinarySearch(int *arr, int size, int element) {
    if (size <= 0) { return -1; }

    // continue implementation here...
}


/**
 * @attention unsupported when `size` is "less than or equal" to `0`.
 *
 * @attention Given the `arr` is already sorted!!!
 *
 * @author Yehuda Elmaliahi / Patched by Tal Jacob.
 */
int *findElementByBinarySearchYehuda(int *arr, int size, int element) {
    if (size == 0) { return NULL; }
    if ((size == 1) && (arr[0] != element)) { return NULL; }

    if (arr[size / 2] == element) {
        return arr + (size / 2);
    } else if (arr[size / 2] < element) {
        return findElementByBinarySearchYehuda(
                arr + (size / 2), (size / 2) + (size % 2), element);
    } else {
        return findElementByBinarySearchYehuda(arr, size / 2, element);
    }
}

int main() {
    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("findElementByBinarySearchYehuda = %d\n",
           *findElementByBinarySearchYehuda(arr, SIZE, 3));

    int  arr2[1]         = {0};
    int  elementToSearch = 1;
    int *returnValue =
            findElementByBinarySearchYehuda(arr2, 1, elementToSearch);
    if (returnValue == NULL) {
        printf("The element `%d` was not found.\n", elementToSearch);
    } else {
        printf("findElementByBinarySearchYehuda = %d\n",
               *findElementByBinarySearchYehuda(arr2, 1, 1));
    }
    return 0;
}