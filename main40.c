#include <stdio.h>

#define N 5

#define FALSE 0
#define TRUE 1
typedef int BOOLEAN;


void swap(int *first, int *second){
    int tmp = *first;
    *first = *second;
    *second = tmp;
}

void bubbleSort(int *arr, size_t size, BOOLEAN (*compare)(int, int)){
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = 0; j < size; ++j) {
            if (compare(arr[i], arr[j])){
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

/**
 * - If rows has even index (e.g. 0, 2, 4...), then sort by ascending order.
 * - If rows has odd index (e.g. 1, 3, 5...), then sort by descending order.
 * @param numRows
 */
void crossSort(int mat[][N], int numRows){

}

int main() { return 0; }