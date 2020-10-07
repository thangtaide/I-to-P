#include <stdio.h>


int main(){
    int a, b;
    printf("Moi nhap 2 so.\na:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("Tong cua a va b la: %d\n",a+b);
    printf("Hieu cua a va b la: %d\n",a-b);
    printf("Tich cua a va b la: %d\n",a*b);
    printf("Thuong cua a va b la: %.2f\n",(float)a/b);
    return 0;
}
