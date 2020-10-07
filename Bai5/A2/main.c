#include <stdio.h>
#include <stdlib.h>

int main()
{
    char test;
    do{
          printf("Moi ban nhap ki tu:");
          fflush(stdin);
          scanf("%c", &test);
          if (('a' <= test && test <= 'z') || ('A' <= test && test <= 'Z'))
          {
              printf("Ki tu vua nhap la chu cai.\n");
          }
          else if('1' <= test && '9' >= test) {
              printf("Ki tu vua nhap la chu so.\n");
          }
          else if (' ' == test) printf("Ban vua nhap ki tu trang.\nChuong trinh ket thuc.\n");
          else printf("Ki tu vua nhap la ki tu dac biet.\n");
    }while(test != ' ');
    return 0;
}
