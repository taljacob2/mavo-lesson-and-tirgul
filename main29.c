#include <stdio.h>

/**
 * Function from lecture.
 */
void move(int n, char t1, char t2, char t3) {
    if (n == 1) {
        printf("move ring from tower %c to tower %c\n", t1, t3);
    } else {
        move(n - 1, t1, t3, t2);
        printf("move ring from tower %c yo tower %c\n", t1, t3);
        move(n - 1, t2, t1, t3);
    }
}

int main() {
    int n;
    printf("Enter a number `n` for computing Hanoi algorithm: ");
    scanf("%d", &n);
    move(n, 'A', 'B', 'C');
    return 0;
}