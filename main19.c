#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void skipCharacterWhilePrintingDynamicallyAllocating(const char *string,
                                                     char        charToSkip) {
    char *newString = malloc(strlen(string) + sizeof(char) * 1);
    while (*string) {
        if (*string != charToSkip) {
            *newString = *string;
        }
        string++;
    }

    // Concise the memory allocation.
    newString = realloc(newString, strlen(newString) + sizeof(char) * 1);

    puts(newString); // Do something.

    free(newString);
}


void skipCharacterWhilePrinting(const char *string, char charToSkip) {
    while (*string) {
        if (*string != charToSkip) { putchar(*string); }
        string++;
    }
}

void skipECharacterWhilePrinting(const char *string) {
    skipCharacterWhilePrinting(string, 'e');
}

int main() {
    skipECharacterWhilePrinting("Hello This Is Me.");
    return 0;
}