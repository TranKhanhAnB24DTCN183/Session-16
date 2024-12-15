#include <stdio.h>

int main() {
    int x = 10;
    int* ptr = &x;

    printf("Cach 1:\n");
    printf("Gia tri cua bien a: %d\n", x);
    printf("Dia chi cua bien a: %d\n", &x);

    printf("Cach 2:\n");
    printf("Gia tri cua bien a thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua bien a thong qua con tro: %d\n", ptr);

    return 0;
}

