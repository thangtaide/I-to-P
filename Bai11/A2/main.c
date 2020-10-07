#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sanpham{
      char ten[20];
      int soluong;
      int dongia;
      int tong;
};

int main()
{
    int i, j, sum=0;
    struct sanpham sp[5];
    for(i=0; i<5; i++){
      printf("Moi nhap thong tin san pham thu %d:\n", i+1);
      printf("Ten san pham: ");
      fflush(stdin);
      gets(sp[i].ten);
      printf("So luong: ");
      scanf("%d", &sp[i].soluong);
      printf("Don gia($): ");
      scanf("%d", &sp[i].dongia);
      sp[i].tong = sp[i].dongia*sp[i].soluong;// tổng giá mỗi sp
      sum += sp[i].tong;// tổng giá tất cả sp
      printf("\n");
    }
    printf("DANH MUC SAN PHAM\n");
    printf("+------------------------------------------------------+\n");
    printf("|STT|  Ten san pham   |So luong|Don gia($)|Tong tien($)|\n");
    printf("+------------------------------------------------------+\n");
    for(i=0; i<5; i++){
      printf("| %d |%s", i+1, sp[i].ten);
      for(j=17; j>strlen(sp[i].ten); j--) printf(" "); // căn lề cho đẹp, nếu tên sp dưới 17 kí tự thì tự động thêm khoảng trống
      printf("|%8d", sp[i].soluong);//%8d in ra số kiểu int, căn lề phải
      printf("|%10d", sp[i].dongia);
      printf("|%12d|\n", sp[i].tong);
    }
    printf("+------------------------------------------------------+\n");
    printf("|%54d|\n", sum);
    printf("+------------------------------------------------------+\n");
    return 0;
}
