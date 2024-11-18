#include <stdio.h>

int main() {
    int a, b;

    // Nhap 2 so tu bàn phím
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // So sánh và tim so nho hon
    if (a <= b) {
        printf("So nho hon là: %d\n", a);
    } else {
        printf("So nho hon là: %d\n", b);
    }

    return 0;
}

