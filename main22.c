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
     *
     * For example:
     * ```
     * typedef struct {
     *     char *names;
     * } Struct1;
     * ```
     *
     * And one of the two options for `copyStruct1`:
     * ```
     * void copyStruct1(Struct1 *destination, const Struct1 *source){
     *     destination->names = malloc(sizeof(char) * (strlen(source->names) + 1));
     *     if (destinaion->names == NULL) { throw a message }
     *     strcpy(destination->names, source->names);
     * }
     * ```
     * or
     *
     * Yehuda Elmaliahi (the lecturer) likes this implementation better:
     * (I don't, because this makes the `copyStruct1` too smart,
     * and also, complicates the user for using the function.)
     * ```
     * void copyStruct1(Struct1 *destination, const Struct1 *source){
     *     destination->names = malloc(sizeof(char) * (strlen(source->names) + 1));
     *     if (destinaion->names == NULL) { throw a message }
     *
     *     // Dangerous code: The user of this function **MUST** set
     *     // destination->names to NULL before invoking this function.
     *     free(destination->names);
     *
     *     strcpy(destination->names, source->names);
     * }
     * ```
     */

    return 0;
}