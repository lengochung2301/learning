#include <stdio.h>
// tinh diem trung binh lon hon 8 va in ra vi tri
void nhap(int arrDiemTB[], int n)
{
    printf("nhap cac phan tu trong mang \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrDiemTB[i]);
    }
}
void nhap2(int arrDiemToan[], int n)
{
    printf("nhap cac phan tu trong mang \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrDiemToan[i]);
    }
}

int sum(int arrDiemTB[], int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        S += arrDiemTB[i];
    }
    return S;
}
int main()
{
    int n;
    printf("MOI NHAP N : ");
    scanf("%d", &n);
    int arrDiemTB[n];
    nhap(arrDiemTB, n);
    printf("diem trung binh la %d", (float)(sum(arrDiemTB, n)) / n); // ep kieu (float) va sua %d = %f

    // dem cac diem taon > 8 va in ra cac vi tri do
    int count = 0;
    int arrDiemToan[i];
    int vitri=0;
    nhap2(arrDiemToan[],n)
    // bien diem bang count++;
    if (arrDiemToan[n] > 8)
    {
        printf("diem toan %d", arrDiemToan[i]);
        vitri = i;
    }
    printf("so hoc sinh co diem toan lon hon 8 %d", count);
}
