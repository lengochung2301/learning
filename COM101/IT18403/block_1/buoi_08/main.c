#include <stdio.h>
/*
------HAM KHONG CO THAM SO TRUYEN VAO------
VD : tinhTong(),
<kieu du lieu> <ten ham> ()
2.có tham số truyền vào
vd : float tinhDiemTB (float diemToan ,float diemLy,float diemHoa)
double tinhTheTich (double x,double y,double z);
CT : <kieu du lieu> <ten ham > (<cac tham so>)



*/

/*bai tap
1 tinh tong S = 1 + 2+ ....+ n
2 tinh tich p = 1*3*5*......*n(2n + 1)
tinh dien tich tam giac co 3 canh la abc
*/
int S = 0;
int x, y, z;
int V;
int tinh_tong_day_so()
{
    int S = 0;
    int n;
    printf("moi nhap n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        S += i;
    }
    return S;
}

// tinh tong day S = 1^2 + 2^2 + 3^2 +.....+n^2
int tong_binh_phuong(int n)
{
    printf("moi nhap n : ");
    scanf("%d", &n);
    for( int i = 1 ;)
}

int tinh_tich(int n)
{
    printf("moi nhap n : ");
    scanf("%d", &n);
    int P = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            P *= i;
        }
    }
    return P;
}

int tinh_tong_day_so(int n)
{
    int S = 0;
    printf("moi nhap n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        S += i;
    }
    return S;
}

int tinhTheTich(int x, int y, int z)
{
    printf("\nNhap chieu dai,chieu rong,chieu cao = ");
    scanf("\n%d \n%d \n%d", &x, &y, &z);
    V = x * y * z;
    return V;
}

// ham k co tham so truyen vao
int tinhDienTich()
{
    printf("nhap chieu dai,chieu rong = ");
    scanf("%d\n%d", &x, &y);
    S = x * y;
    return S;
}

int main()
{
    int choice;
    do
    {
        printf("\n1.bai 1");

        printf("\nmoi chon chuc nang");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            tinhTheTich(x, y, z);
            printf("the tich %d", V);
        }
        break;
        case 2:

            printf("tong la = ", tinhDienTich());
            break;
        case 3:

            printf("%d", tinh_tong_day_so());
            break;
        case 5:
        {
            int n;
            printf("%d", tinh_tong_day_so(n));
        }
        break;
        case 6;
        {
            int n;
            printf("%d", tinh_tich(n));
        } break;
            case 0:

            /* code */
            break;

        default:
            break;
        }
    } while (choice != 0);
    return 0;
}