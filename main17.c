#include <stdio.h>

#define N 21

typedef char BOOLEAN;
#define TRUE  1
#define FALSE 0

BOOLEAN isPrime(int numberToCheckIfPrime, int maxNumberToCheckUntil) {
    for (int i = 2; i <= maxNumberToCheckUntil / 2; i++) {
        if (numberToCheckIfPrime % i == 0) {

            // `numberToCheckIfPrime` is not prime.
            return FALSE;
        }
    }

    return TRUE;
}

// TODO: isPrime has wrong output. need to debug.
int main() {
    int array[N];

    // Init array.
    for (int i = 0; i < N; ++i) { array[i] = i + 2; }

    // Remove non-primes from array.
    for (int i = 0; i < N; ++i) {
        if (array[i] > 2) {
            if (!isPrime(i, array[N - 1])) {

                // `array[i]` is not prime. Remove it from the array.
                printf("found a non-prime: %d\n", array[i]);
            }
        }
    }


    return 0;
}