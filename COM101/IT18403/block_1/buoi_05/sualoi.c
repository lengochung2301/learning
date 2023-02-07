#include <stdio.h>
int main()
{
                int gioBatDau, gioKetThuc, tongGio;
                int tienGio;
                int T = 150000;
                int khuyenMai, khuyenMaiVang;

                printf("tinh tien quan karaoke \n");
                printf("\nMoi nhap gio bat dau :");
                scanf("%d", &gioBatDau);
                printf("Moi nhap gio ket thuc : ");
                scanf("%d", &gioKetThuc);
                printf("\nQuan chua moi cua");

                while (gioBatDau < 12 || gioKetThuc > 23)
                {
                    int gioBatDau, gioKetThuc, tongGio;
                    int tienGio;
                    int T = 150000;
                    int khuyenMai, khuyenMaiVang;
                    printf("\nMoi nhap gio bat dau :");
                    scanf("%d", &gioBatDau);
                    printf("Moi nhap gio ket thuc : ");
                    scanf("%d", &gioKetThuc);
                    tongGio = gioKetThuc - gioBatDau;
                    printf("gio ket thuc %dh - gio bat dau %dh = %dh", gioKetThuc, gioBatDau, tongGio);
                    tienGio = tongGio * T;
                    printf("\ntien gio : %d", (tongGio * T));
                    if (gioBatDau >= 14 && gioBatDau <= 17)
                    {
                        printf("\nkhung gio vang khuyen mai 10 phan tram");
                        khuyenMaiVang = (tongGio)*0.1 * T;
                        printf("\ntien truoc khuyen mai la: %d", tienGio);
                        printf("\ntien khuyen mai vang: %d", khuyenMaiVang);
                        tienGio = tienGio - khuyenMaiVang;
                    }
                    else
                    {
                        if (tongGio > 3)
                        {
                            printf("\ntien gio vuot qua 3h");
                            khuyenMai = (tongGio - 3) * 0.3 * T;
                            tienGio = tongGio * T - khuyenMai;
                            printf("\nso gio vuot: %d => tien khuyen mai: %d", (tongGio - 3), khuyenMai);
                        }
                        else
                        {
                            tienGio = tongGio * T;
                        }
                    }

                    printf("\ntong so tien quy khach phai thanh toan la: %d", tienGio);
                }
            }