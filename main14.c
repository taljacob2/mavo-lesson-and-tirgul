#include <stdio.h>

int main() {

    int              arr[]     = {1, 2};
    int *            p         = arr; // "non-const" pointer, that points to "non-const" `int`.
    const int *      constPInt = arr; // "non-const" pointer, that points to "const" `int`.
    int *const       pIntConst = arr; // "const" pointer, that points to "non-const" `int`.
    const int *const constIntP = arr; // "const" pointer, that points to "const" `int`.

    //    printf("%d\n", (++arr)[0]);       // Impossible, because `arr` is `int * const`.
    //    printf("%d\n", (++p)[0]);         // Possible
    //    printf("%d\n", (++constPInt)[0]); // Possible
    //    printf("%d\n", (++pIntConst)[0]); // Impossible
    //    printf("%d\n", (++constIntP)[0]); // Impossible

    return 0;
}