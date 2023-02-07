#include <stdio.h>
/* Xây dựng Menu :
1.Do...........While
- do
       {
        code thực thi
       } while (condition True);

----Quán lẩu Ngân Béo
1.Thịt bò mỹ
2.Cua hoàng đế
3.Rau
4.Nước lúa mạch
5.Hoa quả
0.Thoát
break : dừng
expression : lựa chọn
case : trường hợp
default :




*/
int main()
{
    int choice;
    do
    {
        printf("Quan lau Ngan Beo\n");
        printf("1 Thit Bo\n");
        printf("2 Cua Hoang De\n");
        printf("3.Rau\n");
        printf("4.Nuoc lua mach\n");
        printf("5.Hoa qua\n");
        printf("0.Thoat\n");
        printf("Moi chon : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        printf("1 Thit Bo\n");
        //int thoat = 0;
        //printf("Ban co muon goi them mon khong ?\n");
        //printf("1.Co\n2.Khong\n");
        //scanf("%d",&thoat);
       

      
            break;
        case 2:
        printf("2 Cua Hoang De\n");

            break;
        case 3:
        printf("3.Rau\n");

            break;
        case 4:
        printf("4.Nuoc lua mach\n");
            break;
        case 5:
        printf("5.Hoa qua\n");
            break;
        case 0:
        break;
     
        default:
            printf("Khong co trong menu\n");
            break;
        }

    } while (choice != 0);
}