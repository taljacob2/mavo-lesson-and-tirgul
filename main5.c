#include <stdio.h>

char findMinDigitThatIsNotLessThanGivenDigit(int number, char minLimitDigit) {
    char minDigit = (char) (number % 10);
    for (; number; number /= 10) {
        char currentLastDigit = (char) (number % 10);
        if ((currentLastDigit < minDigit) &&
            (currentLastDigit < minLimitDigit)) {
            minDigit = currentLastDigit;
        }
    }
    return minDigit;
}

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

    char currentMin = findMinDigitThatIsNotLessThanGivenDigit(number, 10);
    for (; number; number /= 10) {
        currentMin = findMinDigitThatIsNotLessThanGivenDigit(number, currentMin);
        printDigitIndexesFromTheRightWithinNumber(
                number, currentMin);
    }


    return 0;
}