#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, ex;
    printf("Moi ban nhap vao 2 so.\nx=");
    scanf("%f",&x);
    printf("y=");
    scanf("%f",&y);
    ex= x*x*x + 3*x*x + 3*x*y*y + y*y*y;
    printf("Ket qua bieu thuc: %.2f", ex);
    return 0;
}
