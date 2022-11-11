#include <limits.h>
#include <stdio.h>

#define FMT_BUF_SIZE (CHAR_BIT * sizeof(INT_MAX) + 1)

/**
 * @brief Converts a value to its binary representation, formatted as a string.
 *
 * For example:
 * @code
 * int value = 0x0A;
 * printf("%s\n", binToStr(hex));
 * // Outputs: 1010
 * @endcode
 *
 * @param value Any value to be represented in binary, formatted as a string.
 * @return The given `value`'s binary representation in a string format.
 */
char *toBinaryString(int value, char *buf) {
    char *s = buf + FMT_BUF_SIZE;
    *--s    = 0;
    if (!value) *--s = '0';
    for (; value; value /= 2) *--s = '0' + value % 2;
    return s;
}

int main() {
    int hex = 0x0A;
    char  buf[FMT_BUF_SIZE];
    printf("%s\n", toBinaryString(hex, buf));
    return 0;
}
