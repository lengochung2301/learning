#include <stdio.h>
/*
----Mảng Array---
1.Mảng tĩnh không co dãn (giới hạn bởi kích thước)



2.Mảng phải chứa tập giá trị cùng kiểu



3.Index trong mang luon bat dau tu 0



cách khai báo
<kiểu dữ liệu> <arr+Tên> [] = {<giá trị>};
<kieu du lieu> arr+ten[size];




*/
int main()
{
    // int arrNumbers[] = {1, 3, 4, 6.5};
    // printf("%d\n", arrNumbers[2]);
    // float arrDiemTB[] = {6.5, 7, 8, 9, 9.4};
    //  6.5--index = 0 ,vi tri thu nhat
    //   in ra tat ca cac gia tri
    // for (int i = 0; i < 4; i++)
    //{
    //     printf("%d\n", arrNumbers[i]);
    // }

    // nhap mang
    // double arrDiemToan[5]; // so luong phan tu toi da cua mang
    // for (int i = 0; i < 5; i++)
    //{
    //    printf("phan tu thu %d", i);
    //    scanf("%lf", &arrDiemToan[i]);
    //}
    // for (int i = 0; i < 5; i++)
    //{
    //    printf("%lf", arrDiemToan[i]);
    //}

    // nhập 1 mảng gồm n phân tử

    /*
    int n;
    printf("moi nhap so luong phan tu cua mang ");
    scanf("%d ", &n);
    double arrA[n];
    // tính tổng các giá trị trong mảng

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &arrA[i]);
    }
    */

    // tính tổng điemẻ toán tính điẻme trung bình 5 6 3
    // điểmTB = tổng/(index + 1);
    int S = 0;
    int n;
    scanf("%d", &n);
    int arrDiemToan[n];
    for (int i = 0; i < n; i++)
    {
        S += arrDiemToan[i];
    }


    // diem trung binh
    // diem trung binh mon toan lon hon 8
}