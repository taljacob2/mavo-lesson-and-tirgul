#include "Bool.h"
#include <stdio.h>

#define ARRAY_SIZE 10


BOOLEAN isArrayMitstalev(const int *sourceArray, const int sourceArraySize) {
    for (int i = 0; i < sourceArraySize - 2; i++) {
        if (i % 2) {
            if (sourceArray[i + 2] >= sourceArray[i]) { return FALSE; }
        } else {
            if (sourceArray[i + 2] <= sourceArray[i]) { return FALSE; }
        }
    }
    return TRUE;
}

int main() {

    int sourceArray[ARRAY_SIZE] = {1, 400, 27, 300, 125, 200, 130, 2, 400, 1};

    printf("%d\n", isArrayMitstalev(sourceArray, ARRAY_SIZE));

    return 0;
}