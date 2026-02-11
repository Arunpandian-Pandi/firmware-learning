#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Value: %d\n", x);
    printf("Address: %p\n", p);
    printf("Pointer Value: %d\n", *p);

    return 0;
}

