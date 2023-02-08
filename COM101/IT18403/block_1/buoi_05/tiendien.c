#include <stdio.h>
int n;
double arr_tinh_tien_dien[];
int tienDien;
void nhap(int arr_tinh_tien_dien[],int n)
{

    printf("Nhap so phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf",&arr_tinh_tien_dien[i]);
    }
}



int tinh_tien_dien (int tienDien,int soDien) {
     tienDien = soDien*n;
     return tienDien;
}

int main()
{   int n;
    nhap(arr_tinh_tien_dien, n);
    printf("%lf", (double)(tinh_tien_dien(arr_tinh_tien_dien,n)));// ep kieu (float) va sua %d = %f
    

    




}