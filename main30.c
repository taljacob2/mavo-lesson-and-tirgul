#include <stdio.h>

/**
 * From Lecture.
 *
 * @param num An integer number.
 * @param d A digit to check if present at least once in the given `num`.
 * @return `TRUE` if `d` presents at least once in the given `num`, else `FALSE`.
 */
int atLeastOnce(int num, int d) {
    if (num < 10 && num != d) { return 0; }
    if (d == num % 10) { return 1; }

    return atLeastOnce(num / 10, d);
}

int main() {
    printf("%d\n", atLeastOnce(12414234, 2));
    printf("%d\n", atLeastOnce(12414234, 3));
    printf("%d\n", atLeastOnce(12414234, 6));
    return 0;
}
