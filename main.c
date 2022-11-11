#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define FMT_BUF_SIZE (CHAR_BIT * sizeof(INT_MAX) + 1)

unsigned long int getStringLength(char *str) {
    unsigned long int length = 0L;
    for (;*str; length++){}
    return length;
}

void copyString(char *source, char* destination) {
    while ((*destination++ = *source++)){}
}

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
char *toBinaryString(int value) {
    char *buf = malloc(sizeof(char) * FMT_BUF_SIZE);
    *buf = 0; // Initialize value.
    char *s   = buf + FMT_BUF_SIZE;
    *--s      = 0;
    if (!value) *--s = '0';
    for (; value; value /= 2) *--s = '0' + value % 2;
    char * resultString = malloc (sizeof(char) * getStringLength(s));
    copyString(s, resultString);

    free(buf);

    // DEBUG
    // printf("s = %s", s);
    // printf("buf = %s", buf);
    printf("resultString = %s", resultString);
    return s;
}

int main() {
    int   hex = 0x0A;
    char *str;
    printf("%s\n", str = toBinaryString(hex));
    free(str);
    return 0;
}
