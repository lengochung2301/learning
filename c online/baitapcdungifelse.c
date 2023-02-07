#include <stdio.h>
int main()
{
    float a, b, x;
    printf("nhap vao he so cua phuong trinh aX + b = 0");
        printf("\na= ");
    scanf("%f", &a);
        printf("\nb= ");
    scanf("%f", &b);


    if (a != 0) {
        printf("phuong tinh co nghiem");
        x = -b/a;
        printf("x = %2.f",&x);
    


    } else {
        if (b==0) {

            printf("phuong tinh co vo so nghiem");
        }

     else {

        printf("phuong trinh vo nghiem");
    }
    }
}