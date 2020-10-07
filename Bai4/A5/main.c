#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Xa, Xb, Xc, Ya, Yb, Yc;

    printf("Moi nhap toa do 3 diem:\n");
    printf("Diem A: Xa = ");
    scanf("%f", &Xa);
    printf("Ya = ");
    scanf("%f", &Ya);
    printf("Diem B: Xb = ");
    scanf("%f", &Xb);
    printf("Yb = ");
    scanf("%f", &Yb);
    printf("Diem C: Xc = ");
    scanf("%f", &Xc);
    printf("Yc = ");
    scanf("%f", &Yc);

    if(((Xa-Xb)/(Ya-Yb)) == ((Xa-Xc)/(Ya-Yc)))
    {
          printf("Toa do vua nhap la 3 diem thang hang.\n");
    }
    else printf("Toa do vua nhap khong la 3 diem thang hang.\n");

    return 0;
}
