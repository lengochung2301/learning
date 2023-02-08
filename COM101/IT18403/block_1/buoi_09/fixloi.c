#include <stdio.h>
int main()
{
    float arrNumbers[] = {1, 2, 3, 4, 6.5};
    printf("%f \n", arrNumbers[2]);
    float arrDiemTB[] = {6.5, 7, 8, 9, 9.4};
    // 6.5--index =0 tai vi tri thu nhat
    // in ra tat ca cac gia tri
    for (int i = 0; i < 4; i++)
    {
        printf("%f\n", arrNumbers[i]);
    }

    // nhap mot mamg
    double arrDiemToan[5]; // so luong phan  tu toi da cua mang

    for (int i = 0; i < 5; i++)
    {
        printf("phan tu thu %d: \n", i);
        scanf("%lf", &arrDiemToan[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%lf\n", arrDiemToan[i]);
    }

    // nhap mot mang voi n phan tu
    int n;
    printf("moi nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    double arrA[n];
    // tinh tong cac gia tri cua mang
    double tong = 0;
    for (int i = 0; i < n; i++)
    {
        printf("moi nhap cac  gia tri cua mang : ");
        scanf("%lf", &arrA[i]);
        tong += arrA[i];
    }
    printf("tong cac gia tri cua mang la : %lf", tong);

 
    {
        int i, number;
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &number);
        int arr[number];
        printf("Nhap cac phan tu cua mang: \n");
        for (i = 0; i < number; i++)
        {
            printf("a[%d] = ", i);
            scanf("%d", &arr[i]);
        }
        // in cac phan tu cua mang arr
        printf("Cac phan tu cua mang: \n");
        for (i = 0; i < number; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;



    }




    
}