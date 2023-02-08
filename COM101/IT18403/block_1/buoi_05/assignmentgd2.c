#include <stdio.h>
int main()
{
    int choice;
    do
    {
        printf("Menu Bai Tap\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim uoc chung va boi chung cua 2 so\n");
        printf("3.Chuong trinh tinh tien cho quan karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Chuc nang doi tien\n");
        printf("6.Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
        printf("7.Xay dung chuong trinh vay tien mua xe\n");
        printf("8.xap xep thong tin sinh vien\n");
        printf("9.Xay dung game FPOLY-LOTT\n");
        printf("10.Xay dung chuong trinh tinh toan phan so\n");
        printf("0.Thoat\n");
        printf("Moi chon : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            

        break;
    case 2:
    
    break;
    case 3:
        

        break;
    case 4:
        printf("4.Tinh tien dien\n");

        break;
    case 5:
        printf("5.Chuc nang doi tien\n");

        break;
    case 6:
        printf("6.Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");

        break;
    case 7:
        printf("7.Xay dung chuong trinh vay tien mua xe\n");

        break;
    case 8:
        printf("8.xap xep thong tin sinh vien\n");

        break;

    case 9:
        printf("9.Xay dung game FPOLY-LOTT\n");

        break;
    case 10:
        printf("10.Xay dung chuong trinh tinh toan phan so\n");

        break;
    case 0:
        break;

    default:
        printf("Khong co trong menu\n");
        break;
    }
}
while (choice != 0)
    ;
}
