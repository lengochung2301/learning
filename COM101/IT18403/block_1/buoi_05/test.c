#include <stdio.h>
int main()
{
    int gioBatDau, gioKetThuc, tongGio;
    int T = 150000;
    int tienGio;
    int km;
    printf("moi ban nhap gio bat dau hat");
    scanf("%d", &gioBatDau);
    printf("moi ban nhap gio ket thuc hat");
    scanf("%d", &gioKetThuc);
    tongGio = gioKetThuc - gioBatDau;
    printf("gio ket thuc %dh - gio bat dau %dh = %dh", gioKetThuc, gioBatDau, tongGio);



    if(tongGio >3 ) {
        printf("neu so gio hat vuot qua 3h \n");
        km = (tongGio - 3) * 0.3 * T;
        tienGio = tongGio*T - km;
        printf("so gio vuot %d => tien KM %d",(tongGio - 3),km);
    } else {
        tienGio = tongGio *T;
    }
}

do {

} while (/* condition */)
{
    /* code */
}

