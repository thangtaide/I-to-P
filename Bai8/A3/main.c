#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5], b[5], c[5], i;
    printf("Moi nhap cac gia tri 2 mang a, b:\n");
    for(i=0; i<5; i++)
    {
          printf("a[%d] = ", i);
          scanf("%d", a+i);
    }
    for(i=0; i<5; i++)
    {
          printf("b[%d] = ", i);
          scanf("%d", b+i);
    }
    for(i=0; i<5; i++)
    {
          printf("a[%d] = %d; ", i, a[i]);
          printf("b[%d] = %d; ", i, b[i]);
          *(c+i) = *(a+i) + *(b+i);
          printf("c[%d] = %d\n", i, c[i]);
    }
    return 0;
}
