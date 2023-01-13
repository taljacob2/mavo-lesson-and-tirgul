#include <stdio.h>

/**
 * Tell how many binary vectors with with the length of `n` exist.
 *
 * (that means, this function returns `2^n`).
 *
 * 000, 001, 010, 011, 100, 101, 110, 111
 *
 * @param n
 * @return 2^n
 */
int f(int n) {
    if (n <= 0) { return -1; }

    if (n == 1) { return 2; }

    return 2 * f(n - 1);
}

int main() {
    printf("%d\n", f(3));

    return 0; }