#include <stdio.h>

void capNhatPhanTu(int* arr, int size, int viTri, int giaTriMoi) {
    if (viTri >= 0 && viTri < size) {
        *(arr + viTri) = giaTriMoi; 
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

void inMang(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printf("Mang ban dau: ");
    inMang(arr, n);

    int viTri = 3; 
    int giaTriMoi = 8; 

    capNhatPhanTu(arr,n, viTri-1, giaTriMoi);

    printf("Mang sau khi cap nhat: ");
    inMang(arr, n);

    return 0;
}

