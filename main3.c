#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct class1 {
    int x;

    /// Constructor method.
    void (*constructor)(struct class1 *);

} Class1;

static void constructor_Class1_fields(Class1 *class1) { class1->x = 0; }

static void constructor_Class1(Class1 *class1) {

    // Run the following only on the first invocation of this function.
    static char callCounter = 0;
    if (callCounter == 0) {
        class1->constructor = &constructor_Class1;

        callCounter++;
    }

    constructor_Class1_fields(class1);
}

int main() {

    Class1 class1;
    (*class1.constructor)(&class1);

    printf("%d\n", class1.x);

    return 0;
}
