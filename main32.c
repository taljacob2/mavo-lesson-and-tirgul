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

int main() {

    char string[6] = "Hello";
    flipYehuda(string, strlen(string));
    printf("%s\n", string);

    return 0;
}
