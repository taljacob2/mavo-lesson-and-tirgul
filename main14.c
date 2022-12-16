#include <stdio.h>

int main() {

    int              arr[]     = {1, 2};
    int *            p         = arr;
    const int *      constPInt = arr;
    int *const       pIntConst = arr;
    const int *const constIntP = arr;

    //    printf("%d\n", (++arr)[0]); // Impossible because `arr` is `const`.
    //    printf("%d\n", (++p)[0]);         // Possible
    //    printf("%d\n", (++constPInt)[0]); // Possible
    //    printf("%d\n", (++pIntConst)[0]); // Impossible
    //    printf("%d\n", (++constIntP)[0]); // Impossible

    return 0;
}