#include <stdio.h>

int main() {
    int a, b;

    // Nhap 2 so tu b�n ph�m
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // So s�nh v� tim so nho hon
    if (a <= b) {
        printf("So nho hon l�: %d\n", a);
    } else {
        printf("So nho hon l�: %d\n", b);
    }

    return 0;
}

