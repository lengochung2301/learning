#include <stdio.h>
int main()
{
    int n;
    printf("nhap so luong phan tu cua mang : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}