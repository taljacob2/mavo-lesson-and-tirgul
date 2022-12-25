#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void deleteOccurrence(char *sourceString,
                      char *stringToDeleteFromSourceString) {
    char *firstPositionOfStringToDelete = stringToDeleteFromSourceString;
    char *newString = malloc(strlen(sourceString) + sizeof(char) * 1);
    *newString      = 0;
    char *firstPositionOfNewString = newString;
    while (*sourceString) {
        stringToDeleteFromSourceString  = firstPositionOfStringToDelete;
        char *sourceStringSavedPosition = sourceString;
        while (*sourceString++ == *stringToDeleteFromSourceString++) {
            if (!*stringToDeleteFromSourceString) {
                sourceStringSavedPosition = sourceString;
            }
        }
        sourceString = sourceStringSavedPosition;
        *newString++ = *sourceString++;
    }
    newString  = firstPositionOfNewString;
    *newString = 0;

    // Concise the memory allocation.
    newString = realloc(newString, strlen(newString) + sizeof(char) * 1);

    puts(newString); // Do something.

    free(newString);
}

int main() {
    deleteOccurrence("All you need is love. Thank you very much.", "you");

    return 0;
}