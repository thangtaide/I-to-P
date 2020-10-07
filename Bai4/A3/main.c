#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, max, min;
    printf("Moi nhap 4 so thuc: ");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    max=a;
    min=b;

    if(max<b) max=b;
    if(max<c) max=c;
    if(max<d) max=d;

    if(min>a) min=a;
    if(min>c) min=c;
    if(min>d) min=d;

    printf("So lon nhat la %.2f va so nho nhat la %.2f.\n", max, min);
    return 0;
}
