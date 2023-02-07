#include <stdio.h>
int main()
{

    int a, b, min, max;
    printf("nhap vao a =");
    scanf("%d", &a);
    printf("nhap vao bien b= ");
    scanf("%d", &b);


    min = (a<b)?a:b;
    max = (a>b)?a:b;

    printf("max = %d",max);
    printf("min = %d",min);


}