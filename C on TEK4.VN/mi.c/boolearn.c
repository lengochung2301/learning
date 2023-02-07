#include <stdio.h>
#include <stdbool.h>
// Như đã thấy, true được in ra màn hình là 1 và false được in ra là 0.

int main()
{

  // khởi tạo các biến

  bool var1 = true;

  bool var2 = false;

  // in các biến, sử dụng %d

  printf("%d", var1);

  printf("\n%d", var2);

  return 0;
}

#include <stdio.h>

int main()
{
  int number;
  // nhận số nguyên từ bàn phím
  scanf("%d", &number);
  // in ra 1 nếu số đó chia hết cho 5, ngược lại in ra 0
  // gợi ý: sử dụng toán tử %
  printf("%d", number % 5 == 0);
  return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main()
{
  int n1, n2, n3;
  // nhận giá trị từ bàn phím
  scanf("%d %d %d", &n1, &n2, &n3);
  // in 1 nếu n3 là số nhỏ nhất
  // in 0 nếu n3 không là số nhỏ nhất
  bool toi = (n3 < n1) && (n3 < n2);
  printf("%d", toi);
  return 0;
}




// Mệnh đề continue bỏ qua các lệnh của vòng lặp hiện tại, chương trình sẽ không dừng lặp mà nhảy sang vòng lặp tiếp theo:
/*while (booleanExpression1) {
        …

        if (booleanExpression2) {

            countinue;

        } 
}*/
