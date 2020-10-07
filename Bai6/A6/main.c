#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20], i;
    printf("20 phan tu dau tien cua day Fibonacci la: 1 1 ");
    a[0]=1;
    a[1]=1;
    for(i=2; i<20; i++)
    {
          a[i] = a[i-1] + a[i-2];
          printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
