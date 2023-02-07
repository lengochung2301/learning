#include <stdio.h>
/* cách khai báo một mảng
dataType ArrayName[sizeOfArray];
<kiểu dữ liệu> <tên> <mang lưu đc bao nhiêu>;




*/
int main()
{
    // dataType ArrayName[sizeOfArray];
    int a[5]; // khai báo một mảng số nguyên int có tối đa 100 phần tử
    //long long b[100];
    //float c[50];
    //double d[1000];
    //char str[100000];
    //scanf("%d ", &a[1]);
    //printf("Phan tu thu hai trong mang la ",a[1]);
    for (int i = 0;i < 5;i++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0;i < 5;i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = 4;i >= 0;i--) {
        printf("%d",a[i]);
    }
    // Cú pháp nhập số lượng phần tử trong mảng 
    int n;
    printf("nhap so luong phan tu cua mang : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0;i < n;i++ ) {
        scanf("%d",&a[i]);
    }
    for (int i = 0;i < n;i++ ) {
        printf("%d",a[i]);
    }

    // khai báo mảng khởi tạo sẵn
    int a[5] = {2 , 3, 4, 1 ,6};
    for (int i = 0; i < 5 ; i++) {
        printf("%d ", a[i]);
    }


    // Cho một mảnng số nguyên không quá 10k phần tử.....

    int n, a[10000];
    // or
    int n;
    scanf("%d",&n);
    int a[n];


    
    return 0;
}