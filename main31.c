#include <stdio.h>

/**
 *
 * @param num
 * @param d
 *
 * @author Tal Jacob
 */
void printDigitsGreaterThanD(int num, int d) {
    if (!num) { return; }

    printDigitsGreaterThanD(num / 10, d);

    if (num % 10 > d) { printf("%d, ", num % 10); }
}

int main() {

    printDigitsGreaterThanD(2734215, 3);
    return 0;
}