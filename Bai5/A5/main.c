#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nhap, tach, tong=0;
    printf("Moi nhap vao so nguyen duong bat ki: ");
    scanf("%d", &nhap);
    while(nhap!=0){
      tach = nhap%10;
      tong += tach;
      nhap /= 10;
    }
    printf("Tong cac chu so cua so vua nhap la: %d\n", tong);
    return 0;
}
