
#include "Bool.h"
#include <stdio.h>

int getOccurrencesOfDigitInNumber(int number, int digit) {
    if (!number) { return 0; }

    int count = 0;

    count += getOccurrencesOfDigitInNumber(number / 10, digit);

    count += ((number % 10) == digit);

    return count;
}

int isNumberOfOccurrencesEven(int number, int digit) {
    return (getOccurrencesOfDigitInNumber(number, digit) % 2) == 0;
}


int isNumberOfOccurrencesEvenAviv(int number, int digit) {
    if (!number) { return TRUE; }

    if (((number % 10) == digit)) {
        return !isNumberOfOccurrencesEvenAviv(number / 10, digit);
    } else {
        return isNumberOfOccurrencesEvenAviv(number / 10, digit);
    }
}

int main() {

    printf("%d\n", isNumberOfOccurrencesEven(123432, 2));
    printf("%d\n", isNumberOfOccurrencesEvenAviv(123432, 2));
    return 0;
}