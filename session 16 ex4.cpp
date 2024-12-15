#include <stdio.h>

void inMang(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n= sizeof(arr) / sizeof(int);

    inMang(arr,n);

    return 0;
}

