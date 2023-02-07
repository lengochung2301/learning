#include <stdio.h>
// Ngoài ra, chúng ta còn có các dạng có dấu (signed), không dấu (unsigned) của các kiểu dữ liệu này.
/*
Chuỗi định dạng	Kiểu dữ liệu
%c	Hiển thị 1 ký tự
%d	Hiển thị một số nguyên có dấu
%e hoặc %E	Hiển thị dạng khoa học (10 mũ) của một số thực
%f	Giá trị số thực
%g hoặc %G	Tương tự như %e hoặc %E
%hi	Số nguyên có dấu (dạng short)
%hu
Số nguyên không dấu (dạng short)

%i	Số nguyên không dấu
%l hoặc %ld hoặc %li	Số nguyên dài kiểu long
%lf	Số thực độ chính xác kép (kiểu double)
%Lf	Long double
%lu	Số nguyên không dấu kiểu long
%lli hoặc %lld	Số nguyên dài kiểu long long
%llu	Số nguyên dài không dấu kiểu long long
%o	Biểu diễn dạng bát phân
%p	Kiểu con trỏ (địa chỉ)
%s	Chuỗi ký tự
%u	Số nguyên không dấu
%x hoặc %X	Biểu diễn dạng thập lục phân (Hexa)
%n	In ra không gì cả
%%	In ra ký tự %







*/

int main()
{

  // printing character data
  char ch = 'B';
  printf("%c\n", ch);

  // print decimal or integer data with d and i
  int x = 45, y = 90;
  printf("%d\n", x);
  printf("%i\n", y);
  float f = 12.67;
  // print float value
  printf("%f\n", f);
  printf("%e\n", f); // print in scientific notation

  int a = 67;
  printf("%o\n", a); // print in octal format

  printf("%x\n", a); // print in hex format

  char str[] = "Hello World";
  printf("%s\n", str);

  printf("%20s\n", str);    // shift to the right 20 characters including the string
  printf("%-20s\n", str);   // left align
  printf("%20.5s\n", str);  // shift to the right 20 characters including the string, and print string up to 5 character
  printf("%-20.5s\n", str); // left align and print string up to 5 character

  // create a char variable
  char alphabet = 'a';

  // to print char variable, we use %c
  printf("%c", alphabet);

  // trao doi gia tri 2 bien
  {

    double currentSalary = 4578.45;
    double updatedSalary = 7832.89;

    // gán currentSalary vào temporary
    double temporary = currentSalary;

    // gán updatedSalary cho currentSalary
    currentSalary = updatedSalary;

    // gán giá trị cũ currentSalary
    // từ temporary cho updatedSalary
    updatedSalary = temporary;

    printf("%.2lf", currentSalary);
    printf("\n%.2lf", updatedSalary);

    return 0;


     /// mảng array
/*
int numbers[5] = {1,2,3,4,5};
ten mang la numbers
kieu du lieu la int 
kcih thuo9c cua mang la [5]
cac phan tu cua mang duoc viet trong ngoac nhon {1,2,3,4,5}









*/















  }
}