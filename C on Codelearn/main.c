#include<stdio.h>
/*
int main() {
    // Khai báo mảng a kiểu số nguyên với 10 phần tử
    int a[10];
    // Khai báo biến lưu trữ tổng các phần tử trong mảng
    int sum = 0;
    // Dùng vòng for để nhập dữ liệu cho các phần tử trong mảng
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    // Dùng vòng for để tính tổng các phần tử trong mảng
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }
    // In ra tổng các phần tử trong mảng
    printf("%d", sum);
    return 0;

    #include<stdio.h> 
    */

int main() {
    int a;
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d", sum);
    return 0;
}
