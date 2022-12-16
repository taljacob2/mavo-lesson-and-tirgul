#include <stdio.h>

int main() {

    char ch = 'a';

    int *p;

    p = (int *) &ch;

    *p = 17;


    return 0;
}