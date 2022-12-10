#include <stdio.h>
#define ROWS 4
#define COLS 4

int main() {
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            printf("Enter a number: ");
//            scanf("%d", &arr[i][j]);
//        }
//    }

//    // Print above the main
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; j++) {
//            if (i < j) { printf("%d, ", arr[i][j]); }
//        }
//    }

//    // Print underneath the main
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; j++) {
//            if (i > j) { printf("%d, ", arr[i][j]); }
//        }
//    }

//    // Print underneath the second
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; j++) {
//            if (i + j >= ROWS) { printf("%d, ", arr[i][j]); }
//        }
//    }
//
//    // Print above the second
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; j++) {
//            if (i + j <= ROWS) { printf("%d, ", arr[i][j]); }
//        }
//    }

    return 0;
}