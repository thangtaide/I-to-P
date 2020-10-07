#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i;
    float b[5];
    printf("Moi nhap mang:\n");
    for(i=0; i<5; i++)
    {
          printf("Vi tri %d: ", i);
          scanf("%f", &b[i]);
    }
    for(i=0; i<10; i++)
    {
          if(i%2 == 0) a[i] = 0;
          else a[i] = b[(i-1)/2];
    }
    printf("Mang so thuc: ");
    for(i=0; i<5; i++) printf("%.2f ", b[i]);
    printf("\nMang so nguyen: ");
    for(i=0; i<10; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
