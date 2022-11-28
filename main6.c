#include <stdio.h>

void passMatrixIndexTest(){
    int matrix[2][2] = {{1, 2}, {3, 4}};

    // Force index 2 to pass the end of the array.
    printf("%d\n", matrix[0][2]);
}

int main(){
    passMatrixIndexTest();

    return 0;
}