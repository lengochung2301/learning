#include <stdio.h>
#include <math.h>
// kieu double truyen dung %lf
/*
---Ham khong co gia tri tra ve---
1.Ham khong co tham so truyen vao
VD :  void tinhTong() , void tinhHieu().....
cong thuc :
<kieu du lieu> <ten ham> ()

2.Ham co tham so truyen vao
VD : void tinhTong (int a, int b),....
Cong thuc :
<kieu tra ve> <ten ham> (<tham so>)
Quy tac :
-- Ten ham phai co nghia
--Ten ham phai chua dong tu

*/
// Ham khong co tham so truyen

/*
Bai tap : Su dung ham khong co gia tri tra ve
1.Tinh hieu 2
2.In ra bang cuu chuong 3 den bang cuu chuong 8
3.Tinh dien tich hinh tron

*/
int a, b; // biến toan cục để dùng chung
float pI = 3.14, r;

void nhapDuongKinh()
{
    printf("Moi nhap duong kinh = ");
    scanf("%f", &r);
}
void nhapHaiSo()
{
    printf("Moi nhap a = ");
    scanf("%d", &a);
    printf("Moi nhap b = ");
    scanf("%d", &b);
  
}
// Ham co gia tri tra ve
void tinhTheTich(int x, int y, int z)
{

    printf("Nhap x.y.z = ");
    scanf("%d \n %d \n %d", &x, &y, &z);
    printf("the tich = %d", x * y * z);
    

}

int main(void)
{
    int choice;

    do
    {
        printf("Moi nhap lua chon");
        printf("\n1.Tinh Tong ");
        printf("\n2.Tinh tich ");
        printf("\n3.Tinh the tich hinh hop chu nhat");
        printf("\n4.In ra bang cuu chuong");
        printf("\nMoi chon");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n1.Tinh Tong");
            {
                int s;
                nhapHaiSo(); // nhap a va b tu ban phim (Gọi hàm nhập hai số a va b)
                s = a + b;
                printf("\nTong cua 2 so = %d ", s);
            }
            break;
        case 2:
            nhapHaiSo();
            printf("\nTinh la %d", a * b);
            break;
        case 3:
        {
            int x, y, z; // Bien cuc bo
            tinhTheTich(x, y, z);
            // truyen dung vi tri du so luong bien
            break;
        }
        case 4:
        {
            int a = 3;
            printf("\nBang cuu chuong\n");
            while (a <= 8)
            {
                for (int i = 1; i <= 10; i++)
                {
                    printf("%dx%d=%d\n", a, i, i * a);
                }
                printf("\n---------------\n");
                printf("\n");
                a++;
            }
            break;
        }
        case 5:
        {
            nhapDuongKinh();
            printf("dien tich hinh tron la : %.2f x r = %.2f\n", pI, pow(r, 2) * pI);
        }

        break;
        case 0:
            printf("Thoat");
            break;

        default:
            printf("\nMoi chon lai !");
            break;
        }

    } while (choice != 0);
    return 0;
}