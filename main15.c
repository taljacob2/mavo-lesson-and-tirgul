#include <limits.h>
#include <stdio.h>

void updateMinAndMax(int *min, int *max, int currentNumber) {
    if (currentNumber > *max) { *max = currentNumber; }
    if (currentNumber < *min) { *min = currentNumber; }
}

int main() {
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < 10; i++) {
        int currentNumber;
        scanf("%d", &currentNumber);
        updateMinAndMax(&min, &max, currentNumber);
    }

    printf("min = %d\n", min);
    printf("max = %d\n", max);

    return 0;
}