#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("how many integers?");
    scanf("%d", &size);
    calloc(size, sizeof(int));
    return 0;
}