#include <stdio.h>

#define M 7
#define N 9

/*
 * Given a matrix with size [M][N].
 * every element has at most 4 neighbor elements.
 * You need to print the longest path (i.e. sequence) of elements,
 * where you start from a given element, and you can only pass through an
 * element which is larger than the current element.
 */

/**
 *
 * @param i
 * @param j
 * @param mat
 * @return
 *
 * @author Yehuda Elmaliahi
 */
int findPath(int i, int j, int mat[][N], int maxRow) {
    int max = -1;
    int tmp;

    // check up
    if (i > 0 && mat[i - 1][j] > mat[i][j]) {
        tmp = findPath(i - 1, j, mat, maxRow);
        if (tmp > max) { max = tmp; }
    }

    // check down

    // check right

    // check left

}

int main() {
    int matr[M][N] = {{7, 3, 2, 18, 20, 25, 28, 30, 34},
                      {3, 2, 1, 9, 13, -4, 18, 11, 39},
                      {6, -7, 3, -3, 11, 12, -9, 21, 44},
                      {8, 5, 7, 8, 10, 19, 11, 55, 49},
                      {10, 3, -2, 88, -9, -7, 60, 59, 31},
                      {20, 95, 85, 83, 80, 43, 65, 69},
                      {30, -9, 21, 89, 5, 75, 72, 70, 34}};
    return 0;
}