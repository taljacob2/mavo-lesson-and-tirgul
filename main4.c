#include <stdio.h>

void printDigitIndexesFromTheRightWithinNumber(unsigned int positiveNumber,
                                               char         digit) {
    for (unsigned long int i = 1; positiveNumber;
         ++i && (positiveNumber /= 10)) {
        if (positiveNumber % 10 == digit) {
            if (i > 1) { printf(", "); }
            printf("%ld", i);
        }
    }
}

int main() {
    int number;
    scanf("%d", &number);
    int digit;
    scanf("%d", &digit);
    printDigitIndexesFromTheRightWithinNumber(number, digit);
    return 0;
}