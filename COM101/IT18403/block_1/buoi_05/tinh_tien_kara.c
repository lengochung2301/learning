#include <stdio.h>
int main()
{
    int gioDau, gioKetThuc, tongGio;
    int T = 150000;
    int tienGio;
    tongGio = gioKetThuc - gioDau;

    printf("Bang gia dich vu quan Karaoke DOC LA BINH DUONG \n");
    printf("moi nhap gio bat dau hat");
    scanf("%d", gioDau);
    printf("moi nhap gio ket thuc ");
    scanf("%d", gioKetThuc);
    printf("gio ket thuc %d - gio dau %d = %d \n", gioKetThuc, gioDau, tongGio);
}