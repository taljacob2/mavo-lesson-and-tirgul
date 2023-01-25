#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FALSE 0
#define TRUE  1
typedef int BOOLEAN;

BOOLEAN isPalindrome(char *str) {
    if (!*str) { return TRUE; }
    int len = strlen(str);
    if (len == 1) { return TRUE; }

    char *string = malloc(sizeof(char) * (len + 1));
    strcpy(string, str);

    string[len - 1] = 0;
    int returnValue = isPalindrome(string + 1);

    free(string);

    return returnValue;
}

int main() {

    char string[6] = "toyot";
    printf("%d\n", isPalindrome(string));
    printf("%s\n", string);

    return 0;
}