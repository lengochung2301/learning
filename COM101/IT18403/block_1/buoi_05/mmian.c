#include <stdio.h>
int main() 
{
    printf("Chao mung den voi chuc nanng tinh tien cho quan Karaoke!");
            	{	
            		int start,end;
            		printf("\nNhap vao gio bat dau va gio ket thuc : ");scanf("%d%d",&start,&end);
            			while (start<12 || end>23 )
            			{
            				printf("\nmoi nhap lai gio bat dau va ket thuc!");
            				printf("\nNhap vao gio bat dau va gio ket thuc : ");scanf("%d%d",&start,&end);
            				
						}
						int hour=end-start,tien;
            			if (hour<=3) tien=hour*150000;
            			else tien=3*150000+(hour-3)*105000;
            			if (start>=14 && start<=17) tien=tien-tien*10/100;
    					printf("tong tien = %d",tien);
				}
}