#include <stdio.h> /*
On tap cac dang :
1.Dang xep loai hoc luc (Cau lenh IF)
DTB >= 8 : GIOI
6.5 =<DTB<8 : KHA
5=<DTB<6.5 : TB
CON LAI YEU
2.vong lap
in ra cac so tu 50 den 30
tinh tong cac so chan trong day
tinh tich cac so chia het cho 3 trong day
3.Yeu cau phai su dung menu
Dang 2 :
8-10 Gioi
6-7 kha
5-6 trung binh
<3 yeu 
*/
int main()
{
    int choice;
    do
    {
        printf("\n1.Dang xep loai hoc luc");
        printf("\n2.Vong lap ");
        printf("\nMoi chon");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Giai bai 1\n");
            {
                float diemTB;
                printf("\nMoi nhap vao diem TB");
                scanf("%f", &diemTB);
                if (diemTB >= 0 && diemTB <= 10)
                {
                }
                else
                {
                    printf("\nmoi ban nhap lai!");
                }

                if (diemTB >= 8)
                {
                    printf("gioi");
                }
                else if (diemTB >= 6.5 && diemTB < 8)
                {
                    printf("kha");
                }
                else if (diemTB >= 5 && diemTB <= 6.5)
                {
                    printf("Trung binh");
                }
                else
                {

                    printf("yeu");
                }
            }
            break;
        case 2:
            printf("Giai bai 2\n");
            {
                int s = 0;
                int p = 1;
                printf("Day cac so tu 50 den 30 la : \n");
                for (int i = 50; i < 51 && i > 29; i--)
                {
                    printf("%d\n", i);

                    // for (int i = 50; i < 51 && i > 29; i--)
                    //{
                    if (i % 2 == 0)
                    {
                        s += i;
                    }
                    if (i % 3 == 0)
                    {
                        p *= i;
                    }
                    // }
                }

                printf("\nTong cac so chan la : %d\n", s);
                printf("\nTich cac so chia het 3 la : %d\n", p);
            }
            break;

        default:
            printf("Loi moi chon lai !\n");
            break;
        }

    } while (choice != 0);
}