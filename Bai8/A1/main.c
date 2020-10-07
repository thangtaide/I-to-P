#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, temp, *c = &a, *d = &b;
    printf("Moi nhap gia tri 2 so:\na: ");
    scanf("%d", c);
    printf("b: ");
    scanf("%d", d);
    temp = *c;
    *c = *d;
    *d = temp;
    printf("Gia tri cua 2 so la: a = %d va b = %d\n", a, b);
    printf("Dia chi cua a la: %d, dia chi cua b la: %d", &a, &b);
    return 0;
}
