#include <stdio.h>
int main()
{
    /*float N;
        printf("\nMoi ban nhap mot so bat ki : ");
        scanf("%f",&N);
        if (N == (int)N) {
            printf("\n%f la so nguyen",N);
        } else {
            printf("\n%f khong phai la so nguyen",N);
            // %g : Số chấm động (VD 5.54 khi in sẽ in ra 5.54)
        }
return 0; */

    int N;
    do
    {
        printf("\nNhap N: ");
        scanf("%d", &N);
        if (N <= 0) 
        {
            printf("\nn phai > 0. Xin nhap lai !");
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
    return 0;
}