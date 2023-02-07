#include <stdio.h>
/*
-----Biến-----
1.Biến là nơi lưu trữ giá trị
2.Cách đặt tên biến:
    + Cách 1: Normal
    VD : sinhvien, hocsinh.....
    + Cách 2 : UnderScore
    VD : sinh_vien, tinh_tong.....
    + Cách 3 : CamelCasse
    VD : sinhVien,SinhVien,....
Lưu ý: Biến có phân biệt chữ hoa và chữ thường
    + Tên biến phải có nghĩa
    + Cập nhật biến bằng tiếng anh
3.Các kiểu dữ liệu trong biến
Số nguyên -%d.....int
Số thức -%f.....float
Số thực dạng double - %lf.....double
Ký tự -%c    char
Chuỗi -%s........String
4. Cách khai báo biến
Công thức:
<kiểu dữ liệu> <tên biến>;
<kiểu dữ liệu> <tên biến> = <giá trị>;
<kiểu dữ liệu> <tên biến>,<tên biến 2>;

*/

int main() {
    //int name;//khai báo biến//
    //int year = 2023://khởi tạo biến//
    //float a,b,c,diemC;
    /*
    Bài 1 : In ra màn hình các năm sinh sau 
    năm sinh 1 : 2002
    năm sinh 2 : 2004
    năm sinh 3 : 2003
    Năm nay là năm 2023 và năm sau là năm 2024
    Bài 2 : VIết chương trình nhập vào diemC
    Bài 3 : Viết chương trinh in ra kí tự tiền $
    */
   int ns1 = 2002,ns2 = 2003 ,ns3 = 2004;
    printf("nam sinh 1 %d\n",ns1);
    printf("nam sinh 2 %d\n",ns2);
    printf("nam sinh 3 %d\n",ns3);
    int nn=2023,ns=2024;
    printf("\nNam nay la nam  %d va nam sau la nam %d",nn,ns);

   /*float diemC2;
   printf("\nMoi nhap vao diem C=");
   scanf("%f",diemC2);
   printf("\nGia tri cua diem C la %f,diemC2");*/

    // int h=50;
    //char giaTriTienDo = '$';//
   // printf("gia tri cua to tien nay la %d%c",h,giaTriTienDo); //

 float chieuDai, chieuRong, S, CV;
        printf("moi nhap chieu dai: ");
        scanf("%f",&chieuDai);
        printf("moi nhap chieu rong: ");
        scanf("%f",&chieuRong);
        S = chieuDai * chieuRong;
        CV = (chieuDai + chieuRong) * 2;
        printf("\ndien tich la : %f", S);
        printf("CHU VI la : %f", CV);
        return 0;
        

}
