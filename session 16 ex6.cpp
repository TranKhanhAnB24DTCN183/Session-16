#include <stdio.h>
#include<string.h>

int timKiem(int* arr, int n, int giaTri) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == giaTri) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int giaTriCanTim = 7;
    int n = sizeof(arr) / sizeof(int);


    int viTri = timKiem(arr, n, giaTriCanTim);

    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", giaTriCanTim, viTri+1);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", giaTriCanTim);
    }

    return 0;
}

