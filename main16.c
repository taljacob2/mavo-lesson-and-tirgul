#include <stdio.h>

/**
 * In this code example, you can see that `fgets` receives the string
 * with the `\n` characters at the end, while `gets` removes it from the string.
 */
int main() {
    char string1[1000] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                         1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    fgets(string1, 1000, stdin);

    for (int i = 0; i < 15; i++) {
        printf("%d", string1[i]);
        printf("|");
    }

    char string2[1000] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                          1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    gets(string2, 1000, stdin);

    for (int i = 0; i < 15; i++) {
        printf("%d", string2[i]);
        printf("|");
    }

    return 0;
}