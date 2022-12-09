#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct class1 Class1; // Forward declaration of incomplete type

struct class1 {
    int x;

    /// Printing method.
    void (*print)();
};

static void print(Class1 *class1) { printf("x = %d\n", class1->x); }

static void constructor_Class1_fields(Class1 *class1) {
    class1->x     = 1;
    class1->print = &print;
}

Class1 *Class1Constructor() {
    Class1 *obj = malloc(sizeof *obj);
    if (obj == NULL) { /* error handling here */
    }

    constructor_Class1_fields(obj);

    return obj;
}

int main() {
    Class1 *class1 = Class1Constructor();
    (*class1->print)(class1);

    free(class1);

    return 0;
}
