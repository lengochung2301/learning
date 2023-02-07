#include <stdio.h>
int main()
{
    int choice;
    do
    {
        printf("Menu Bai Tap\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim uoc chung va boi chung cua 2 so\n");
        printf("3.Chuong trinh tinh tien cho quan karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Chuc nang doi tien\n");
        printf("6.Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
        printf("7.Xay dung chuong trinh vay tien mua xe\n");
        printf("8.xap xep thong tin sinh vien\n");
        printf("9.Xay dung game FPOLY-LOTT\n");
        printf("10.Xay dung chuong trinh tinh toan phan so\n");
        printf("0.Thoat\n");
        printf("Moi chon : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("1.Kiem tra so nguyen\n");
            // giai bai 1 :
            {
                int x;
                printf("Moi ban nhap so nguyen : \n");
                scanf("%d", &x);
                printf("So x co phai so nguyen to ?\n");
                printf("So x co phai so nguyen ?\n");
                printf("So x co phai so chinh phuong?\n");
            }

            {
                int x;
                printf("Moi ban nhap so nguyen : \n");
                scanf("%d", &x);
                if (x % 1 == 0 && x % x == 0 && x % 2 != 0)
                {
                    printf("x la so nguyen to");
                }
                // chưa hoàn thành

                float N;
                printf("\nMoi ban nhap mot so bat ki : ");
                scanf("%f", &N);
                if (N == (int)N)
                {
                    printf("\n%g la so nguyen", N);
                }
                else
                {
                    printf("\n%g khong phai la so nguyen", N);
                    // %g : Số chấm động (VD 5.54 khi in sẽ in ra 5.54)
                    // có thể sử dụng cả %f
                }

                int N;
                do
                {
                    printf("\nNhap N: ");
                    scanf("%d", &N);
                    if (N <= 0)
                    {
                        printf("\nN phai > 0. Xin nhap lai !");
                    }
                } while (N <= 0);
                if (sqrt((float)N) == (int)sqrt((float)N))
                {
                    printf("\n%d La so chinh phuong", N);
                }
                else
                {
                    printf("\n%d Khong la so chinh phuong", N);
                }
            }

            break;
        case 2:
            printf("2.Tim uoc chung va boi chung cua 2 so\n");
            // giai bai 2
            int a, b, uc, bc;
            printf("Moi ban nhap so thu nhat : ");
            scanf("%d", &a);
            printf("Moi ban nhap so thu hai : ");
            scanf("%d", &b);
            for (uc = a; uc >= 1; uc--)
            {
                if (a % uc == 0 && b % uc == 0)
                {
                    printf("UCLN(%d,%d)=%d\n", a, b, uc);
                    break;
                }
            }
            for (bc = a; bc <= a * b; bc++)
            {
                if (bc % a == 0 && bc % b == 0)
                {
                    printf("BCNN(%d,%d)=%d\n", a, b, bc);
                    break;
                }
            }
            break;
        case 3:
            printf("3.Chuong trinh tinh tien cho quan karaoke\n");
            // Menu
            /*int choice;
         do
        {
            printf("\n-------QUAN KARAOKE BINH DUONG--------\n");
            printf("Menu\n");
            printf("1.COMBO 1: \nGio HatBo luc lac khoai tay\nEch xao xa ot\nNuoc ngot,Snack\n");
            printf("2.COMBO 2: \nGio Hat \nBanh sinh nhat\nGa u muoi\n");
            printf("0.Thoat\n");
            printf("Moi chon : \n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("1.COMBO 1: \nGio Hat \nBo luc lac khoai tay \nEch xao xa ot \nNuoc ngot,Snack");
                break;
            case 2:
                printf("2.COMBO 2: \nGio Hat \nBanh sinh nhat \n.Ga u muoi");
                break;
            case 0:
                break;
            default:
                printf("Khong co trong menu\n");
                break;
            }
        }
        while (choice != 0); */

            // Thanh Toan
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

            break;
        case 4:
            printf("4.Tinh tien dien\n");

            break;
        case 5:
            printf("5.Chuc nang doi tien\n");

            break;
        case 6:
            printf("6.Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");

            break;
        case 7:
            printf("7.Xay dung chuong trinh vay tien mua xe\n");

            break;
        case 8:
            printf("8.xap xep thong tin sinh vien\n");

            break;

        case 9:
            printf("9.Xay dung game FPOLY-LOTT\n");

            break;
        case 10:
            printf("10.Xay dung chuong trinh tinh toan phan so\n");

            break;
        case 0:
            break;

        default:
            printf("Khong co trong menu\n");
            break;
        }
    } while (choice != 0);
}
