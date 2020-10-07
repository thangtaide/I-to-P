#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sanpham{
      char ten[20];
      int soluong;
      int dongia;
      int tong;
}sanpham;

void nhap(sanpham *s, int *sum){// nhập vào dữ liệu 1 sản phẩm
      printf("Ten san pham: ");
      fflush(stdin);
      gets(s->ten);
      printf("So luong: ");
      scanf("%d", &s->soluong);
      printf("Don gia($): ");
      scanf("%d", &s->dongia);
      s->tong = s->dongia*s->soluong;
      (*sum) += s->tong;
      printf("\n");
}

void in(sanpham s, int i){// in 1 sản phẩm
      int j;
      printf("| %d |%s", i+1, s.ten);
      for(j=17; j>strlen(s.ten); j--) printf(" ");
      printf("|%8d", s.soluong);
      printf("|%10d", s.dongia);
      printf("|%12d|\n", s.tong);
}

void inds(sanpham s[], int sum){// in danh sách
      int i;
      printf("DANH MUC SAN PHAM\n");
      printf("+------------------------------------------------------+\n");
      printf("|STT|  Ten san pham   |So luong|Don gia($)|Tong tien($)|\n");
      printf("+------------------------------------------------------+\n");
      for(i=0; i<5; i++){
            in(s[i], i);
      }
      printf("+------------------------------------------------------+\n");
      printf("|%54d|\n", sum);
      printf("+------------------------------------------------------+\n\n");
}

void SapXepAZ(sanpham s[]){// yêu cầu nhập vào 1 mảng kiểu sanpham, mảng thì chính nó cũng là được coi là con trỏ nên có thể thay đổi dữ liệu
      int i, j;
      sanpham temp;// biến để hoán đổi
      for(i=0; i<5; i++){
            for(j=i+1; j<5; j++){
                  if(strcmp(s[i].ten, s[j].ten) == 1){// hàm so sánh strcmp(s1,s2) trả về 0 nếu 2 chuỗi = nhau, trả về 1 nếu s1>s2, trả về -1 nếu s1<s2
                        strcpy(temp.ten, s[i].ten);// hàm copy chuỗi strcpy(s1,s2) lấy s2 gán cho s1, trả về s1
                        strcpy(s[i].ten, s[j].ten);
                        strcpy(s[j].ten, temp.ten);

                        temp.dongia = s[i].dongia;
                        s[i].dongia = s[j].dongia;
                        s[j].dongia = temp.dongia;

                        temp.soluong = s[i].soluong;
                        s[i].soluong = s[j].soluong;
                        s[j].soluong = temp.soluong;

                        temp.tong = s[i].tong;
                        s[i].tong = s[j].tong;
                        s[j].tong = temp.tong;
                  }
            }
      }
}

void SapXepGia(sanpham s[]){
      int i, j;
      sanpham temp;
      for(i=0; i<5; i++){
            for(j=i+1; j<5; j++){
                  if(s[i].dongia > s[j].dongia){
                        strcpy(temp.ten, s[i].ten);
                        strcpy(s[i].ten, s[j].ten);
                        strcpy(s[j].ten, temp.ten);

                        temp.dongia = s[i].dongia;
                        s[i].dongia = s[j].dongia;
                        s[j].dongia = temp.dongia;

                        temp.soluong = s[i].soluong;
                        s[i].soluong = s[j].soluong;
                        s[j].soluong = temp.soluong;

                        temp.tong = s[i].tong;
                        s[i].tong = s[j].tong;
                        s[j].tong = temp.tong;
                  }
            }
      }
}

int main()
{
    int i, j, sum=0, dk=1, DKtim;// dk là điều kiện đã nhập dữ liệu từ chức năng 1 hay chưa, trả về 1 nếu chưa
    struct sanpham sp[5];
    char choose, tim[20];
    while(1){
      printf("\tMENU\n");
      printf("1. Nhap thong tin cac san pham\n");
      printf("2. Hien thi cac san pham theo thu tu A-Z\n");
      printf("3. Hien thi cac san pham theo thu tu gia tang dan\n");
      printf("4. Tim san pham theo ten\n");
      printf("0. Thoat\n");
      printf("  #Chon: ");
      fflush(stdin);
      choose = getchar();
      switch(choose){
      case '1':
            printf("\nNhap thong tin cac san pham:\n");
            for(i=0; i<5; i++){
                  printf("Moi nhap thong tin san pham thu %d:\n", i+1);
                  nhap(&sp[i], &sum);
            }
            dk = 0;// sau khi nhập dữ liệu dk = 0
            break;
      case '2':
            if(dk) printf("\nMoi nhap thong tin san pham truoc!!!\n\n");// nếu chưa nhập dữ liệu ở chức năng 1 thì dk vẫn =1 if(1)=true
            else{
                  printf("\nHien thi cac san pham theo thu tu gia tang dan:\n");
                  SapXepAZ(sp);
                  inds(sp, sum);
            }
            break;
      case '3':
            if(dk) printf("\nMoi nhap thong tin san pham truoc!!!\n\n");
            else{
                  printf("\nHien thi cac san pham theo thu tu A-Z:\n");
                  SapXepGia(sp);
                  inds(sp, sum);
            }
            break;
      case '4':
            if(dk) printf("\nMoi nhap thong tin san pham truoc!!!\n\n");
            else{
                  DKtim = 1;// biến kiểm tra đã tìm đươc sản phẩm nào chưa, nếu chưa vẫn giữ nguyên =1
                  printf("\nMoi nhap ten san pham can tim: ");
                  fflush(stdin);
                  gets(tim);
                  printf("+------------------------------------------------------+\n");
                  printf("|STT|  Ten san pham   |So luong|Don gia($)|Tong tien($)|\n");
                  printf("+------------------------------------------------------+\n");
                  for(i=0; i<5; i++){
                        if(!strcmp(tim, sp[i].ten)){
                              in(sp[i], i);
                              DKtim = 0;// nếu tìm được 1 sản phẩm trở lên thì DKtim = 0
                        }
                  }
                  if(DKtim) printf("|               Khong tim thay san pham                 |\n");
                  printf("+------------------------------------------------------+\n\n");
            }
            break;
      case '0':
            printf("\nThoat chuong trinh ...\n");
            exit(0);
      default:
            printf("\n Chuc nang khong ton tai! Moi chon lai.\n\n");
            break;
      }
    }
    return 0;
}
