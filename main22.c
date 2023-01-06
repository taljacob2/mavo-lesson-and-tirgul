#include <stdio.h>

typedef struct {
    char names[20];
} Struct1;

typedef struct {
    char names[20];
} Struct2;

int main() {

    //    Different ways to initialize `struct1` inline:
    Struct1 struct1 = {.names = {'a', 'b', 'c'}};
    //    Struct1 struct1 = {.names = {"abc"}};
    //    Struct1 struct1 = {{'a', 'b', 'c'}};
    //    Struct1 struct1 = {{"abc"}};
    //    Struct1 struct1 = {"abc"};


    printf("struct1.names = %s\n", struct1.names);

    // -------------------------------------

    //    Struct2 struct2;
    //    struct2 = struct1; // Not possible for compilation.

    // -------------------------------------

    Struct1 struct1_2;

    struct1_2 = struct1; // Copies all members by value.
    printf("Executing: `struct1_2 = struct1;`\n");

    printf("struct1_2.names = %s\n", struct1_2.names);

    struct1.names[0] = 'z';
    printf("Executing: `struct1.names[0] = 'z';`\n");

    printf("struct1.names = %s\n", struct1.names);
    printf("struct1_2.names = %s\n", struct1_2.names);

    struct1_2 = struct1; // Copies all members by value.
    printf("Executing: `struct1_2 = struct1;`\n");

    printf("struct1.names = %s\n", struct1.names);
    printf("struct1_2.names = %s\n", struct1_2.names);


    /*
     * **IMPORTANT:**
     *
     * As you can see, `struct1.names` and `struct1_2.names` are independent of
     * each other. Because they were **allocated statically**.
     *
     * In case we were allocating them dynamically (via `malloc`), then the copy
     * would have been getting `struct1_2.names` to point to the same `char *`
     * that was allocated at `struct1.names`. And thus changing
     * `struct1_2.names` would have caused a change in `struct1.names`.
     * In this case, we should have make a **manual** deep copy for `names`.
     */

    return 0;
}