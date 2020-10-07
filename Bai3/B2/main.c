#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, a1, a2, a3, a4, a5, a6, b16, b25, b34;
    printf("Moi ban nhap so co 6 chu so: ");
    scanf("%d",&a);
    a1=a/100000;
    a2=a/10000 - a1*10;
    a3=a/1000 - a1*100 - a2*10;
    a4=a/100 - a1*1000 - a2*100 - a3*10;
    a5=a/10 - a1*10000 - a2*1000 - a3*100 - a4*10;
    a6=a%10;
    printf("Ket qua:\n%d%d%d%d%d%d\n",a6,a5,a4,a3,a2,a1);
    return 0;
}
