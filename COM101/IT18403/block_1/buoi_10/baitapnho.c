#include <stdio.h>
int main()
{
    int n; // số chó
    printf("moi nhap so cho : ");
    scanf("%d", &n);
    float arr_can_nang[n];
    for (int i = 0; i < n; i++)
    {
        printf("so can nag cua con cho thu %d là : \n", i);
        scanf("%f", &arr_can_nang[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\narr_can_nang[%d] = %f", i, arr_can_nang[i]);
    }

    float max = arr_can_nang[0];
    float min = arr_can_nang[0];
    for (int i = 0; i < n; i++)
    {
        if (arr_can_nang[i] > max)
        {
            max = arr_can_nang[i];
            printf("%5d", i + 1);
        }
        if (arr_can_nang[i] < min)
        {
            min = arr_can_nang[i];
        }
        printf("con cho co can nang lon nhat la %f\n", max);
        printf("con cho co can nang thap nhat la %f\n", min);
    }
}