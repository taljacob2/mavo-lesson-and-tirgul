#include <stdio.h>
#include <string.h>

/**
 *
 * @param s
 * @param size
 *
 * @author Yehuda Elmaliahi
 */
void flipYehuda(char *s, int size) {
    char tmp;
    if (size <= 1) { return; }

    tmp         = *s;
    *s          = s[size - 1];
    s[size - 1] = tmp;

    flipYehuda(s + 1, size - 2);
}

/**
 *
 * @param string
 * @author Tal Jacob
 */

// TODO: need to fix
void flip(char *string) {
    if (!string) { return; }
    if (strlen(string) == 1) { return; }

    char temp                      = *string;
    *string                        = *(string + strlen(string) - 1);
    *(string + strlen(string) - 1) = temp;

    flip(string + 1);
}

int main() {

    char string[6] = "Hello";
    flip(string);
    printf("%s\n", string);

    return 0;
}
