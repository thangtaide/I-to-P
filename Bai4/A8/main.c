#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char x;
    printf("Nhap so thu nhat: ");
    scanf("%d",&a);
    printf("Nhap so thu hai: ");
    scanf("%d",&b);

    printf("\tMENU\n");
    printf("====================\n");
    printf("+\n-\nx\n:\n");
    printf("====================\n");
    printf("Chon: ");
    fflush(stdin);
    scanf("%c", &x);
    switch(x)
    {
    case '+':
      printf("Tong: %d + %d = %d\n", a, b, a+b);
      break;
    case '-':
      printf("Hieu: %d - %d = %d\n", a, b, a-b);
      break;
    case 'x':
      printf("Tich: %d x %d = %d\n", a, b, a*b);
      break;
    case ':':
      printf("Thuong: %d : %d = %d\n", a, b, a/b);
      break;
    default:
      printf("Ki tu ban nhap khong hop le.\n");
      break;
    }
    return 0;
}
