#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i;
    printf("Nhap du lieu:\n");
    for(i=0; i<10; i++)
    {
      printf("Vi tri %d: ", i);
      scanf("%d", &a[i]);
    }
    printf("Cac phan tu vi tri chan: ");
    for(i=0; i<10; i +=2)
    {
          printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
