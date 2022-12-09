#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int atseret(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) { result *= i; }
    return result;
}

int isDividedWithoutLeftover(int dividee, int num) {
    return num % dividee == 0;
}

int isComplicated(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (isDividedWithoutLeftover(i, num)) { sum += i; }
    }
    return sum == num;
}


int main() {
    for (int i = 2; i < 100; i++) {
        if (isComplicated(i)) { printf("%d\n", i); }
    }
}