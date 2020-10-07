#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, h, S, V;
    printf("Moi nhap vao gia tri ban kinh: ");
    scanf("%f",&r);
    printf("Moi nhap vao gia tri chieu cao: ");
    scanf("%f",&h);
    S = M_PI*r*r;
    V = S*h;
    printf("\nDien tich day: %.2f\n",S);
    printf("The tich hinh tru tron: %.2f\n",V);
    return 0;
}
