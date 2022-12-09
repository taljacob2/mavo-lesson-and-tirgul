#include "Bool.h"
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

/**
 *
 * @attention Remember to `free` the returned string.
 *
 * @return
 */
unsigned char *readStringFromStdinUntilNewlineDynamically() {
    unsigned long int outputStringSize           = 1L;
    unsigned long int outputStringAllocationSize = 2L;
    unsigned char *   outputString =
            malloc(sizeof(unsigned char) * outputStringSize);

    int readChar = getchar(); // Read char from `stdio` stream.
    while (readChar != '\n' && readChar != '\r' && readChar != EOF) {

        /*
         * Prepare to save `readChar` to the output string.
         * Realloc `outputString` dynamically if needed.
         */
        if (outputStringSize * 2 == outputStringAllocationSize) {
            outputStringAllocationSize *= 2;
            outputString =
                    realloc(outputString,
                            sizeof(unsigned char) * outputStringAllocationSize);
        }

        // Save `readChar` to the output string.
        outputString[outputStringSize - 1] = (unsigned char) readChar;

        readChar = getchar(); // Read again from `stdio` stream.
        outputStringSize++;
    }
    outputString[outputStringSize - 1] = 0;

    return outputString;
}

int main() {
    unsigned char *string = readStringFromStdinUntilNewlineDynamically();
    printf("%s", string);
    free(string);

    return 0;
}