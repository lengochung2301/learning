#include <stdio.h>
// kiem tra tinh chat cac phan tu trong mang
// dem so luong so nguyen to , so chan , so le ,so hoan hao .....

int nguyen_to(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    // nhap cac phant u trong man
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (nt(a[i]))
            ++cnt;
    }
    printf("%d", cnt);
    return 0;
}