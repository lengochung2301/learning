#include <stdio.h>
int main()
{
float diemC;
    scanf("%f", &diemC);
    if (diemC >= 5)
    {
        printf("ban da qua mon ");
    }
    else
    {
        printf("ban da truot mon c");
    }
 

    float diemTB;
    printf("Moi nhap vao diem TB");
    scanf("%f", &diemTB);
    if (diemTB >= 0 && diemTB <= 10)
    {
    }
    else
    {
        printf("moi ban nhap lai!");
    }

    if (diemTB >= 8)
    {
        printf("gioi");
    }
    else if (diemTB >= 6.5 && diemTB < 8)
    {
        printf("kha");
    }
    else if (diemTB >= 5 && diemTB <= 6.5)
    {
        printf("Trung binh");
    }
    else
    {

        printf("yeu");
}

/* Lý thuyết
scanf : nhập vào từ bàn phím
printf : hiển thị , in ra màn hình
1.Toán tử trong C : 
- Toán tử số học : +, - , *, /, %
% : chia lấy phần dư
i%2==0 có nghĩa là i chia cho 2 dư 0
n%2==0 - số chẵn
n%2!= - số lẻ
++ : tăng 1 đơn vị 
-- : giảm 1 đơn vị
i++ : i = i + 1
i-- : i = i - 1
++x sẽ ưu tiên hơn ++x
-Toán tử so sánh : >,<,>=,<=,==
-Toán tử gán : +=,*=,....
vD : i+=1, sum +=1
tích *=i --> tích = tích*i
2.Câu lệnh IF (Câu lệnh rẽ nhánh hay câu lệnh điều kiện)
IF,IF ELSE ,IF ELSE IF
3.Toán tử logic:
-&& : toán tử và
- || : Toán tử hoặc
- ! : Toán tử not
*/