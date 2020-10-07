#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Moi ban nhap vao 2 so.\nnum1:");
    scanf("%d",&a);
    printf("num2:");
    scanf("%d",&b);
    c=a;
    a=b+1;
    b=c+1;
    printf("Ket qua:\nnum1:%d\nnum2:%d",a,b);
    return 0;
}
