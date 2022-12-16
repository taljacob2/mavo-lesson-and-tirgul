#include <stdio.h>

int main() {

    char ch = 'a';

    int *p;

    /*
     * Force `p` to be able to write to `ch` with `*p`, by casting `&ch` to
     * `int *`.
     */
    p = (int *) &ch;

    *p = 17;


    return 0;
}