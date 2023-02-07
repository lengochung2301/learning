#include <stdio.h>
int main()
{
    // phuong trinh bac nhat ax + b = 0
    float a, b, x;

    // nhap du lieu
    printf("nhap he so cua phuong trinh ax + b = 0 ");
    printf("\na = ");
    scanf("%f", &a);
    printf("\nb = ");
    scanf("%f", &b);

    x = -b/a;

    printf("x = %2.f", x);
}