#include <stdio.h>

/**
 * Print all binary vectors with `size` `n`.
 *
 * 000, 001, 010, 011, 100, 101, 110, 111
 *
 * @param n
 * @return
 */
int f(int n) {
    if (n <= 0) { return -1; }

    if (n == 1) { return 2; }

    return 2 * f(n - 1);
}

int main() { return 0; }