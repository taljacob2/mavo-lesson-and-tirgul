#include <stdio.h>

#define N 4

void shiftRowOnce(int mat [N][N], int rowIndex){
    int temp = mat[rowIndex][0];
    for (int i = 0; i < N - 1; ++i) {
        mat[rowIndex][i] = mat[rowIndex][i + 1];
    }
    mat[rowIndex][N - 1] = temp;
}
void shiftRowByK(int mat [N][N], int rowIndex, int k){
    for (int i = 0; i < k; ++i) {
        shiftRowOnce(mat, rowIndex);
    }
}

/**
 * left shift
 */
void shiftMatrixByK(int mat[N][N], int k){
    for (int i = 0; i < N; ++i) {
        shiftRowByK(mat, i, k);
    }
}

int main(){

    int mat[N][N] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    shiftMatrixByK(mat, 1);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d, ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}