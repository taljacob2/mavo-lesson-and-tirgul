#include <stdio.h>

int func(int num) {
    if (num == 1) { return 1; }
    return func(num - 1) * 2;
}

int main() {

    // func(1) -> func(2) -> func(3) -> func(4) -> func(5)
    // 1          2          4          8          16
    printf("%d\n", func(5));

    return 0;
}