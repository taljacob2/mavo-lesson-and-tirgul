#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE  1
typedef int BOOLEAN;

int isNeededToAddToSum(int sumSoFar, int nextNum) {
    if ((sumSoFar >= 0) && (sumSoFar + nextNum) < 0) { return FALSE; }

    return TRUE;
}

int getSumOfSequence(int arr[], int arrSize) {
    int sum = 0;

    for (int i = 0; i < arrSize; ++i) {
        if (isNeededToAddToSum(sum, arr[i])) {
            sum += arr[i];
        } else {
            return sum;
        }
    }

    return sum;
}

int maxSumSubArr(int arr[], int arrSize) {
    int maxSum = 0;

    for (int i = 0; i < arrSize; ++i) {
        int currentSequenceSum = getSumOfSequence(arr + i, arrSize - i);
        if (maxSum < currentSequenceSum) { maxSum = currentSequenceSum; }
    }

    return maxSum;
}

int main() {

    int arr[9] = {8, 3, 8, -5, 4, 3, -40, 3, 5};
    printf("%d\n", maxSumSubArr(arr, 9));

    return 0;
}
