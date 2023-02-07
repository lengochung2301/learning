#include <stdio.h>
int main()
{

    // VD :
    /* Bài tập :
    1.In ra các số từ 100 đến 1
    2.Tính tổng các số chia hết cho 3 và 5
    3.In ra all cửu chương.
    */

    // giai bai 1
    /* for (int i = 100; 100 >= i && i >= 1; i--)
     {
         printf("%d\n", i);
     }
     */

    // giai bai 2

    /* for (int i = 1; i <= 100; i++)
         if (i % 3 == 0 && i % 5 == 0)

         {
             printf("Cac so chia het cho 3 va 5 la :%d\n", i);
         }
         */

    // giai bai tap 3
    int a = 1;
    printf("\nBang cuu chuong\n");
    while (a <= 10) {
    for (int i =1;i <=10;i++ )
    {
       printf("%dx%d=%d\t",a,i,i*a);
    }
    printf("\n---------------\n");
    printf("\n");
    a++;
    } 


    // bài 2 cách 2
    /*int i = 1;
    int sum = 0;
    while ( i <= 16 )
    {
        if (i % 3 == 0 && i % 5 == 0)
        printf("%d",sum += i);
        i++;

    } */
    

    

    
}