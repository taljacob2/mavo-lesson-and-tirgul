#include <stdio.h>
#include <string.h>

#define FALSE 0
#define TRUE  1
typedef int BOOLEAN;

void reverseString(char *str, size_t length) {
    for (size_t i = 0; i < length / 2; ++i) {
        char tmp            = str[i];
        str[i]              = str[length - i - 1];
        str[length - i - 1] = tmp;
    }
}

BOOLEAN isAlphabetChar(char character) {
    return (character >= 'a' && character <= 'z') ||
           (character >= 'A' && character <= 'Z');
}

void findFirstAndLastAlphabetCharSequence(char *str, char **outFirstCharPointer,
                                          char **outLastCharPointer) {
    *outFirstCharPointer = NULL;
    while (*str) {
        const BOOLEAN isAlphabetCharReturnValue = isAlphabetChar(*str);
        if (isAlphabetCharReturnValue && *outFirstCharPointer != NULL) {
            *outFirstCharPointer = str;
        }
        if (isAlphabetCharReturnValue) { *outLastCharPointer = str; }

        str++;
    }
}

void reverseAllAlphabetInString(char *str) {

    char *firstCharPointer = NULL;
    char *lastCharPointer  = NULL;
    while (*str) {
        findFirstAndLastAlphabetCharSequence(str, &firstCharPointer,
                                             &lastCharPointer);
        reverseString(firstCharPointer, lastCharPointer - firstCharPointer + 1);
        str = lastCharPointer;
        str++;
    }
}

int main() {

    // TODO: FIXME: does not work.

    char string[15] = "hello123world5";
    reverseAllAlphabetInString(string);

    printf("%s\n", string);
    return 0;
}