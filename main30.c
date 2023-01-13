#include <stdio.h>

/**
 * From Lecture.
 * @param num
 * @param d
 * @return
 */
int atLeastOnce(int num, int d) {
    if (num < 10 && num != d) { return 0; }
    if (d == num % 10) { return 1; }

    return atLeastOnce(num / 10, d);
}

int main() { return 0; }