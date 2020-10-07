#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C, delta, X1, X2;
    printf("Moi nhap A: ");
    scanf("%f", &A);
    printf("Moi nhap B: ");
    scanf("%f", &B);
    printf("Moi nhap C: ");
    scanf("%f", &C);
    delta = B*B - 4*A*C;

    if(delta<0) printf("Phuong trinh da cho vo nghiem.\n");

    else if(delta==0) printf("Phuong trinh da cho co nghiem kep X = %.2f\n", -B/(2*A));

    else{
      delta = sqrt(delta);
      X1 = (-B - delta) / (2*A);
      X2 = (-B + delta) / (2*A);
      printf("Phuong trinh da cho co 2 nghiem phan biet:\nX1 = %.2f\nX2 = %.2f\n", X1, X2);
    }

    return 0;
}
