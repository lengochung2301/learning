#include <stdio.h>
// numbers [index]
int main()
{
    // create an array
    int numbers[5] = {1, 2, 3, 4, 5};
    // access array using loop
    for (int index = 0; index < 5; ++index)
    {
        printf("%d\n", numbers[index]);
    }
    // dong vong for de in toan bo gia tri cua mang

    // thay doi tung gia tri cua tung phan tu trong mang
    // create an array
    int ages[5] = {23, 37, 19, 14, 41};
    // change the value of second element
    ages[1] = 38;
    // change the value of fourth element
    ages[3] = 15;
    // access array using loop
    for (int i = 0; i < 5; ++i)
    {
        printf("%d\n", ages[i]);
    }

    return 0;

    // nhập dữ liệu cho mảng

    {
        // declare an array
        int ages[5];
        printf("Enter array elements:\n");
        for (int i = 0; i < 5; ++i)
        {
            scanf("%d", &ages[i]);
        }
        // access array using loop
        printf("Array Elements: ");
        for (int i = 0; i < 5; ++i)
        {
            printf("%d  ", ages[i]);
        }
        return 0;
    }

    
}