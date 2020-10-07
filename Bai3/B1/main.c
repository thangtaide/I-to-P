#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Moi nhap 2 so nguyen: ");
    scanf("%d%d",&a,&b);
    printf("AND: %d\n", a&b);
    printf("OR: %d\n", a|b);
    printf("XOR: %d\n", a^b);
    printf("NOT: %d %d\n", abs(a-1), abs(b-1));

    return 0;
}
