#include <stdio.h>

int main() {

    int              arr[]          = {1, 2};
    int *            intP           = arr; // "non-const" pointer, that points to "non-const" `int`.
    const int *      constIntP      = arr; // "non-const" pointer, that points to "const" `int`.
    int *const       intPConst      = arr; // "const" pointer, that points to "non-const" `int`.
    const int *const constIntPConst = arr; // "const" pointer, that points to "const" `int`.

    //    printf("%d\n", (++arr)[0]);            // Impossible, because `arr` is `int * const`.
    //    printf("%d\n", (++intP)[0]);           // Possible
    //    printf("%d\n", (++constIntP)[0]);      // Possible
    //    printf("%d\n", (++intPConst)[0]);      // Impossible
    //    printf("%d\n", (++constIntPConst)[0]); // Impossible

    return 0;
}