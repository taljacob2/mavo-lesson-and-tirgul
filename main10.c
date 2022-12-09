#include "Bool.h"
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

/**
 * @brief Reads a string from the `stdin` stream until the first "newline" char
 *        ('\n' or '\r') or EOF.
 *
 * - The returned string will NOT include the "newline" char.
 * - In case the string was ended with a "newline" char, that char will be
 *   removed from the `stdin` stream.
 *
 * @attention Remember to `free` the returned string.
 *
 * @return The first string that was read from the `stdio` stream.
 */
unsigned char *readStringFromStdinUntilNewlineDynamically() {
    unsigned long int outputStringSize           = 1L;
    unsigned long int outputStringAllocationSize = 2L;
    unsigned char *   outputString =
            malloc(sizeof(unsigned char) * outputStringSize);

    int readChar = getchar(); // Read char from `stdio` stream.
    while (readChar != '\n' && readChar != '\r' && readChar != EOF) {

        /*
         * Prepare to save `readChar` to `outputString`.
         * Reallocate `outputString` dynamically if needed.
         */
        if (outputStringSize * 2 == outputStringAllocationSize) {
            outputStringAllocationSize *= 2;
            outputString =
                    realloc(outputString,
                            sizeof(unsigned char) * outputStringAllocationSize);
        }

        // Save `readChar` to `outputString`.
        outputString[outputStringSize - 1] = (unsigned char) readChar;

        readChar = getchar(); // Read again from `stdio` stream.
        outputStringSize++;
    }

    // Always end `outputString` with a `NULL` char.
    outputString[outputStringSize - 1] = 0;

    // Concise the allocation of `outputString`.
    outputString =
            realloc(outputString, sizeof(unsigned char) * outputStringSize);

    return outputString;
}

int main() {
    unsigned char *string = readStringFromStdinUntilNewlineDynamically();
    printf("%s", string);
    free(string);

    return 0;
}