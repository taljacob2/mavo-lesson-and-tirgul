#include <stdio.h>

typedef struct {
    char names[20];
} Struct1;

typedef struct {
    char names[20];
} Struct2;

int main() {
    Struct1 struct1 = {.names = {'a', 'b', 'c'}};
    printf("struct1.names = %s\n", struct1.names);

    // -------------------------------------

    //    Struct2 struct2;
    //    struct2 = struct1; // Not possible for compilation.


    // -------------------------------------


    Struct1 struct1_2;

    struct1_2 = struct1;
    printf("Executing: `struct1_2 = struct1;`\n");

    printf("struct1_2.names = %s\n", struct1_2.names);

    struct1.names[0] = 'z';
    printf("Executing: `struct1.names[0] = 'z';`\n");

    printf("struct1.names = %s\n", struct1.names);
    printf("struct1_2.names = %s\n", struct1_2.names);

    struct1_2 = struct1;
    printf("Executing: `struct1_2 = struct1;`\n");

    printf("struct1.names = %s\n", struct1.names);
    printf("struct1_2.names = %s\n", struct1_2.names);

    return 0;
}