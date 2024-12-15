#include <stdio.h>

void sum(int* x, int* y, int* ketQua) {
    *ketQua = *x + *y;
}

int main() {
    int a = 8, b = 5, ketQua;

    sum(&a, &b, &ketQua);

    printf("Tong hai so la: %d\n",ketQua);

    return 0;
}

