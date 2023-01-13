#include <stdio.h>

/**
 * Hanoi tower.
 *
 * Function from lecture.
 *
 * At the starting point, all rings are positioned in `t1`.
 * Where the largest ring is positioned at the bottom, and the second largest
 * ring is positioned on top of it, and the third largest ring is position on
 * top of it, and so on...
 */
void move(int n, char t1, char t2, char t3) {
    if (n == 1) {
        printf("move ring from tower %c to tower %c\n", t1, t3);
    } else {
        move(n - 1, t1, t3, t2);
        printf("move ring from tower %c to tower %c\n", t1, t3);
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