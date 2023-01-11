#include <stdio.h>

int func(int num) {
    if (num == 1) { return 1; }
    return func(num - 1) * 2;
}

int func2(int num) {
    if (num == 1) { return 1; }
    if (num == 0) { return 0; }
    return func2(num - 1) + func2(num - 2);
}

int main() {

    // func(1) -> func(2) -> func(3) -> func(4) -> func(5)
    // 1          2          4          8          16
    printf("%d\n", func(5));

    // func2(5)
    // f(4) + f(3)
    // f(3) + f(2) + f(2) + f(1)
    // f(2) + f(1) + 0 + 1 + 0 + 1 + 1
    // 0 + 1 + 1 + 3 = 5
    printf("%d\n", func2(5));

    return 0;
}