#include <stdio.h>

/**
 * recursive.
 *
 * @param a
 * @param size
 * @return multiplication of all even numbers.
 */
unsigned int mulEven(unsigned int a[], int size) {
    if ((size == 1) && (a[0] % 2 == 1)) { return 0; }
    if ((size == 1) && (a[0] % 2 == 0)) { return a[0]; }

    unsigned int result = mulEven(a, size - 1);
    if ((result == 0) && (a[size - 1] % 2 == 0)){
        result = 1;
    }
    return result * (a[size - 1] % 2 ? 1 : a[size - 1]);
}

int main() {

    unsigned int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n", mulEven(arr, 9));

    unsigned int arr2[9] = {1, 11, 3, 15, 5, 17, 7, 19, 9};
    printf("%d\n", mulEven(arr2, 9));

    unsigned int arr3[9] = {1, 12, 3, 15, 5, 17, 7, 19, 9};
    printf("%d\n", mulEven(arr3, 9));

    return 0;
}