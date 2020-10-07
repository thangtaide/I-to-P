#include <stdio.h>
#include <stdlib.h>

typedef struct Mark{
      char subject[80];
      float written;// Điểm LT
      float practical;//Điểm TH
      float average;//Điểm TB
}Mark;

void nhap(Mark *m){// yêu cần nhập vào 1 biến con trỏ kiểu mark để có thể thay đổi thông tin của nó
      printf("\nMoi nhap ten mon hoc: ");
      fflush(stdin);
      gets(m->subject);// khi là 1 biến cần ->, khi là mảng (vd Mark m[] ) thì chỉ cần m[i].subject
      printf("Moi nhap diem thi ly thuyet: ");
      scanf("%f", &m->written);
      printf("Moi nhap diem thi thuc hanh: ");
      scanf("%f", &m->practical);
      m->average = (m->practical + m->written)/2;
}

void in(Mark m){//cần nhâp 1 biến không là con trỏ vì ta chỉ cần lấy dữ liệu để in ra màn hình, không cần thay đổi giá trị của nó
      printf("Mon hoc: %s\n", m.subject);// dùng "." thay vì "->" theo khai báo
      printf("Diem LT: %.2f\n", m.written);
      printf("Diem TH: %.2f\n", m.practical);
      printf("Diem TB: %.2f\n\n", m.average);
}

int main()
{
    float max;
    int i, dk = 1;
    Mark m[6];
    char choose;
    while(1){
      printf("\tMENU\n");
      printf("1. Nhap diem\n");
      printf("2. Hien thi danh sach\n");
      printf("3. Diem trung binh cao nhat\n");
      printf("4. Thoat\n");
      printf("  #Chon: ");
      fflush(stdin);
      choose = getchar();//getchar() để nhập vào 1 kí tự;
      switch(choose){
      case '1':// cần dấu ' ' vì choose là kiểu char, nếu là case 1: thì cần giảm choose đi 48 theo bảng mã ascii
            printf("\nNhap diem:\n");
            for(i=0; i<6; i++){
                  nhap(&m[i]);// &m vì cần 1 biến con trỏ
            }
            dk = 0;
            break;
      case '2':
            if(dk) printf("\nMoi nhap diem cac mon hoc truoc!!!\n\n");
            else{
                  printf("\nHien thi danh sach:\n");
                  for(i=0; i<6; i++){
                        in(m[i]);// m vì không cần 1 biến con trỏ
                  }
                  printf("\n");
            }
            break;
      case '3':
            if(dk) printf("\nMoi nhap diem cac mon hoc truoc!!!\n\n");
            else{
                  max = m[0].average;
                  for(i=0; i<6; i++){
                        if(max < m[i].average) max = m[i].average;
                  }
                  printf("\nDiem trung binh cao nhat: %.2f\n\n", max);
            }
            break;
      case '4':
            printf("\nThoat chuong trinh ...\n");
            exit(0);
      default:
            printf("\n Chuc nang khong ton tai! Moi chon lai.\n\n");
            break;
      }
    }
    return 0;
}
