//Bỏ qua khai báo số lượng phần tử mảng: ta có thể không cần khai báo số lượng phần tử mảng nếu đã khai báo tất cả các phần tử trong mảng
#include <stdio.h>
 
int main() {
  // create an array
  int ages[] = {1, 2, 3, 4, 5};
  // access array using loop
  for (int i = 0; i < 5; ++i) {
    printf("%d\n", ages[i]);
  }
  return 0;
}