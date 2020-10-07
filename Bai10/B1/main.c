#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chuanhoa(char chuoi[]){
      int n, i, j;
      n = strlen(chuoi);
      for(i=0; i<n; i++){
            if(chuoi[i] == ' ' && chuoi[i+1] == ' ' || chuoi[0] == ' '){
                  for(j=i; j<n; j++){
                        chuoi[j] = chuoi[j+1];
                  }
                  i--;
                  n--;
            }
            else if(chuoi[i] == ' ' && chuoi[i+1] > 96 && chuoi[i+1] < 123) chuoi[i+1] -=32;
            else if(chuoi[i] != ' ' && chuoi[i+1] > 64 && chuoi[i+1] < 91) chuoi[i+1] +=32;
            if(chuoi[n-1] == ' '){
            chuoi[n-1] = '\0';
            n--;
            }
      }
      if(chuoi[0] > 96 && chuoi[0] < 123) chuoi[0] -=32;
}

void in(int a, char ten[], char tench[]){
      int i;
      if(a<9) printf("| 0%d", a+1);
      else if(a<99) printf("| %d", a+1);
      else printf("|%d", a+1);
      printf("|%s", ten);
      for(i=21; i>strlen(ten); i--) printf(" ");
      printf("|%s", tench);
      for(i=22; i>strlen(tench); i--) printf(" ");
      printf("|\n");

}

int main()
{
    int count=0, i, dk;
    char choose, ten[30][30], tench[30][30], tim[30];
    do{
          printf("\n+---------------------------------------+\n");
          printf("|\t\t   MENU\t\t\t|\n");
          printf("+---------------------------------------+\n");
          printf("| 1. Nhap them mot hoc vien moi.\t|\n");
          printf("| 2. Tim kiem hoc vien\t\t\t|\n");
          printf("| 3. Chuan hoa ten hoc vien\t\t|\n");
          printf("| 4. Hien thi danh sach hoc vien \t|\n");
          printf("| 0. Thoat chuong trinh\t\t\t|\n");
          printf("+---------------------------------------+\n");
          printf("     Moi ban chon: ");
          fflush(stdin);
          choose = getchar();
          switch(choose){
          case '1':
            printf("\nNhap them mot hoc vien moi.\n");
            printf("Moi ban nhap ten hoc vien: ");
            fflush(stdin);
            gets(ten[count]);
            count++;
            break;

          case '2':
            printf("\nTim kiem hoc vien.\n");
            printf("Moi nhap ten hoc vien: ");
            fflush(stdin);
            gets(tim);
            dk = 1;
            for(i=0; i<count; i++){
                  if((!strcmp(tim, ten[i])) && dk == 1){
                        printf("Tim cac hoc vien co STT: ");
                        if(i<9) printf("0%d ", i+1);
                        else printf("%d ", i+1);
                        dk = 0;
                  }
                  else if(!strcmp(tim, ten[i]) && dk == 0){
                        if(i<9) printf("0%d ", i+1);
                        else printf("%d ", i+1);
                  }
            }
            if(dk) printf("Ten hoc vien vua nhap khong co trong danh sach!\n");
            break;

          case '3':
            printf("\nChuan hoa ten hoc vien.\n");
            for(i=0; i<count; i++){
                  strcpy(tench[i], ten[i]);
                  chuanhoa(tench[i]);
            }
            break;

          case '4':
            printf("\n+------------------------------------------------+\n");
            printf("|             Chuan hoa ten hoc vien             |\n");
            printf("+------------------------------------------------+\n");
            printf("|STT|      Ten cu         |      Ten chuan hoa   |\n");
            printf("+------------------------------------------------+\n");
            for(i=0; i<count; i++){
                  in(i, ten[i], tench[i]);
            }
            printf("+------------------------------------------------+\n");
            break;

          case '0':
                printf("\nThoat chuong trinh ...\n");
            break;

          default:
                printf("Ban chon khong dung. Moi nhap lai.\n\n");
            break;
          }
    }while(choose != '0');
    return 0;
}
