#include <stdio.h>
#include <math.h>
// tinh tien dien
float soDien;
float bac1 = 1.678, bac2 = 1.734, bac3 = 2.014, bac4 = 2.536, bac5 = 2.834, bac6 = 2.927;
void nhapSoDien()
{
    printf("Moi nhap so dien : ");
    scanf("%f", &soDien);
}


float tinh_dien(float so_dien)
{
    float soDienVuotBac;

    float cost = 0;
    if (soDien > 0 && soDien <= 50)
    {
        // printf("So kWh ma quy khanh dang o bac 1 so tien ma quy khanh phai tra la : %.2ff\n", soDien * bac1);
        cost = soDien * bac1;
    }
    else if (soDien <= 100)
    {
        soDienVuotBac = soDien - 50;
        // printf("\nso tien quy khanh phai tra da vuot qua bac 1 : ");
        // printf("\nso dien phai tinh voi gia bac 2 = %.2f", soDienVuotBac = soDien - 50);
        // printf("\nso tien quy khach phai thanh toan  la : %.2f", (50 * bac1) + (soDienVuotBac * bac2));
        cost = (50 * bac1) + (soDienVuotBac * bac2);
    }
    else if (soDien > 100 && soDien <= 200)

    {
        soDienVuotBac = soDien - 100;
        // printf("\nso tien quy khanh phai tra da vuot qua bac 1 va 2 : ");
        // printf("\nso dien phai tinh voi gia bac 3 = %.2f", soDienVuotBac = soDien - 100);

        // printf("\nso tien quy khach phai thanh toan  la : %.2f", (50 * bac1) + (100 * bac2) + (soDienVuotBac * bac3));
        cost = (50 * bac1) + (50 * bac2) + (soDienVuotBac * bac3);
    }
    else if (soDien > 200 && soDien <= 300)
    {
        soDienVuotBac = soDien - 200;
        // printf("\nso tien quy khanh phai tra da vuot qua bac 1,2 va 3 : ");
        // printf("\nso dien phai tinh voi gia bac 4 = %.2f", soDienVuotBac = soDien - 200);
        // printf("\nso tien quy khach phai thanh toan  la : %.2f", (50 * bac1) + (100 * bac2) + (100 * bac3) + (soDienVuotBac * bac4));
        cost = (50 * bac1) + (50 * bac2) + (100 * bac3) + (soDienVuotBac * bac4);
    }
    else if (soDien > 300 && soDien <= 400)
    {
        soDienVuotBac = soDien - 300;
        // printf("\nso tien quy khanh phai tra da vuot qua bac 1,2 va 3 va 4 : ");
        // printf("\nso dien phai tinh voi gia bac 5 = %.2f", soDienVuotBac = soDien - 300);
        // printf("\nso tien quy khach phai thanh toan  la : %.2f", (50 * bac1) + (100 * bac2) + (100 * bac3) + (200 * bac4) + (soDienVuotBac * bac5));
        cost = (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) + (soDienVuotBac * bac5);
    }
    else
    {
        // printf("\nso tien quy khanh phai tra da vuot qua bac 1,2 va 3,4 va 5 : ");
        // printf("\nso dien phai tinh voi gia bac 6 = %.2f", soDienVuotBac = soDien - 200);
        // printf("\nso tien quy khach phai thanh toan  la : %.2f", (50 * bac1) + (100 * bac2) + (100 * bac3) + (200 * bac4) + (300 * bac5) + (soDienVuotBac * bac6));
        soDienVuotBac = soDien - 400;
        cost = (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) + (100 * bac5) + (soDienVuotBac * bac6);
    }
    return cost;
}
int main()
{
    int choice;
    do
    {
        printf("\1.Gia tien dien bac 1");
        printf("\n2.Gia tien dien bac 2");
        printf("\n3.Gia tien dien bac 3");
        printf("\n4.Gia tien dien bac 4");
        printf("\n0.Thoat");
        printf("\nMoi chon");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            float tien_dien = tinh_dien(soDien);
            printf("%f", tien_dien);
        }
        break;
        case 2:
        {
        }
        break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 0:
            break;

        default:
            printf("khong co trong menu");
            break;
        }

    } while (choice != 0);
    return 0;
}