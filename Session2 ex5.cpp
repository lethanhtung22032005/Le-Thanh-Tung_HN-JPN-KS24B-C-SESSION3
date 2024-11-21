#include <stdio.h>
int main() {
    // Khai b�o c�c bi?n chi?u d�i v� chi?u r?ng
    int length = 10; // Chi?u d�i c?a h�nh ch? nh?t
    int width = 3;   // Chi?u r?ng c?a h�nh ch? nh?t

    // T�nh chu vi v� di?n t�ch c?a h�nh ch? nh?t
    int perimeter = 2 * (length + width);
    int area = length * width;

    // Hi?n th? k?t qu?
    printf("Chieu dai cua hinh chu nhat la: %d\n", length);
    printf("Chieu rong cua hinh chu nhat la: %d\n", width);
    printf("Chu vi cua hinh chu nhat la: %d\n", perimeter);
    printf("Dien tich cua hinh chu nhat la: %d\n", area);

    return 0;
}
