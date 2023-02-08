#include <stdio.h>
int n;
void nhap()
{
    printf("\nMoi nhap n : ");
    scanf("%d", &n);
}
int main()
{
    int choice;
    do
    {
        printf("\n1.Nhap so nguyen duong n,tinh tong cac so le tu 1-n va bo qua 9");
        printf("\n2.Nhap so nguyen duong n,kiem tra xem n la so chan hay so le va in ra thong bao");
        printf("\n3.Xep loai");
        printf("\n4.Nhap thong tin cho");
        printf("\n0.Thoat");
        printf("\nMoi chon");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int n;
            int sum = 0;
            printf("\nMoi nhap n : ");
            scanf("%d", &n);
            for (int i = 1; i <= n; i++)
            {
                if (i % 3 == 0 && i != 9)
                {
                    sum += i;
                    printf("tong la : %d\n", sum);
                }
            }
        }

        break;
        case 2:
        {
            nhap();
            if (n % 3 == 0)
            {
                printf("day la so le\n");
            }
            else
            {
                printf("day la so chan");
            }
        }

        break;
        case 3:
        {
            double diem_trung_binh;
            scanf("%lf", &diem_trung_binh);
            if (diem_trung_binh < 0 && diem_trung_binh > 10)
            {

                printf("moi nhap lai diem trung binh");
            }
            if (diem_trung_binh >= 9)
            {
                printf("ban nhan duoc hoc bong 5000000");
            }
            else if (diem_trung_binh >= 8)
            {
                printf("ban nhan duoc hoc bong 3000000");
            }
            else if (diem_trung_binh >= 7)
            {
                printf("ban nhan duoc hoc bong 1000000");
            }
            else
            {
                printf("ban nhan duoc mot cai nit !");
            }
        }

        break;
        case 4:
        {
            int con_cho;
            int max, min;
            printf("Moi nhap so luong cho");
            scanf("%d", &con_cho);
            double arrCho[con_cho];
            for (int i = 0; i < con_cho; i++)
            {
                printf("Moi nhap so can nang cua cho");
                scanf("%lf", &arrCho[i]);
            }
            for (int i = 0; i < con_cho; i++) {
                printf(" con cho thu %d va can nang cua no la %lf", i, arrCho[i]);
            }
            double maxCho = arrCho[0];

            for (int i = 0; i < con_cho; i++)
            {

                if (maxCho > arrCho[i])
                {
                    max = arrCho[i];
                    printf("%d", max);
                }
                else
                {
                    printf("%lf", arrCho[0]);
                }
            }
            double minCho = arrCho[1];
            for (int i = 0; i < con_cho; i++) {


            }
        }
        break;
        case 0:

            break;

        default:
            break;
        }
    } while (choice != 0);
    return 0;
}