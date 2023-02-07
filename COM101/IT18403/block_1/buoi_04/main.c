#include <stdio.h>
/* Các loại vòng lặp trong C :
    -for,while,do....while
    -vòng lặp for (Bắt đầu;điều kiện;Bước nhảy) 
    + lặp với số lần đã biết trước  
    
*/

int main() {
    // for (size_t i = 0; i < count;i++) //
    printf("\nChao mung ban den voi mon C");
    printf("\nChao mung ban den voi mon C");
    printf("\nChao mung ban den voi mon C");
    printf("\nChao mung ban den voi mon C");
    // FOR
    printf("\nSu dung vong lap for");
    for (int i = 0; i <=3; i++) {
        printf("\nChao mung ban den voi mon C");
    }
    // In ra cac so tu 1 den 100
    /*for (int i = 1;i < 100; i++) 
    {
        printf("\n%d",i);
        sum +=1;
    }
    printf("\nTong la : %d",sum);
    */
    
    
    int sum = 0;
    for (int i = 1;i <100;i++)
     sum +=i;
    {
        printf("\nTong la : %d",sum);
       
    }
    // tinh tong cac so chan tu 1  -- 10

    int s = 0;
    for (int i=1;i < 10;i++)
    if (i%2 == 0) {
         s += i;
    }
    printf("\nTong cac so chan la : %d\n",s);

    //vòng lặp WHILE 
    //while (/* condition; dieu kien */)
    // {
        /* code */
    //}
    //  In ra bang cuu chuong 8

    int a = 1;
    while (a<=10 )
    {
      printf("8x%d=%d\n",a,8*a);
      a++;
    }
    
    //Do....WHILE

    //do
    //{
        /* code */
    //} while (/* condition True */);
    // lặp với số lần chưa biết trước

    // VD :
    /* Bài tập : 
    1.In ra các số từ 100 đến 1
    2.Tính tổng các số chia hết cho 3 và 5
    3.In ra all cửu chương.
    */

    for (int i = 100;100 >= i && i >= 1;i--)
    {
        printf("%d",i);
    }
    
    
    




}  