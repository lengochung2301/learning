#include <stdio.h>
int a, b;
int s;

void nhapHaiSo(int a,int b)
{
    
    s = a + b;
    printf("%f", a + b);
}
int main()
{
    nhapHaiSo(2,3);
    printf("%d",s);
    return 0;
}