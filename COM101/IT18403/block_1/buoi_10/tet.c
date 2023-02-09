
#include <stdio.h>
 
#define MAX_SIZE 100 // sức chứa tối đa
 
void NhapMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
 
void XuatMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("\narr[%d] = %d", i, arr[i]);
    }
}
 
/*
Ý tưởng:
    1. Coi số đầu tiên trong mảng là số lớn nhất => chỉ số của số lớn nhất là 0:
        max = a[0]
        index = 0
    2. Duyệt qua từng số trong mảng => Sử dụng for, Nếu số hiện tại a[i] lớn hơn max:
        max = a[i];
        index = i;
    3. Lưu ý vị trí = chỉ số + 1
 
Giải bài toán:
    1. Tìm giá trị lớn nhất của mảng
    2. Duyệt và đưa ra các vị trí có giá trị = giá trị lớn nhất.
*/
int MaxElement(int a[], int n){
    int maxValue = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    return maxValue;
}
 
void GetMaxPosition(int a[], int n){
    int maxValue = MaxElement(a, n);
    printf("\nVi tri cua phan tu lon nhat: ");
    for(int i = 0; i < n; i++){
        if(a[i] == maxValue){
            printf("%5d", i + 1);
        }
    }
}
 
int main(){
    int arr[MAX_SIZE];
 
    int n; // số lượng phần tử của mảng
    // Kiểm tra số lượng phần tử là số dương + nhỏ hơn MAX_SIZE
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_SIZE);
 
    // Nhập mảng
    NhapMang(arr, n);
 
    // Xuất mảng
    XuatMang(arr, n);
 
    GetMaxPosition(arr, n);
 
}
