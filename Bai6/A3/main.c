#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i, max, min, Nmax=1, Nmin=1;
    printf("Nhap du lieu gom 10 so:\n");
    for(i=0; i<10; i++)
    {
          printf("So thu %d: ", i+1);
          scanf("%d", &a[i]);
    }
    max = a[0];
    min = max;
    for(i=1; i<10; i++)
    {
          if(max < a[i])
          {
                max = a[i];
                Nmax = 1; // reset số lần xuất hiện max
          }
          else if(max ==  a[i]) Nmax++;
          if(min > a[i])
          {
                min = a[i];
                Nmin = 1; // reset số lần xuất hiện min
          }
          else if(min == a[i]) Nmin++;
    }
    printf(" - Gia tri lon nhat la %d, so lan xuat hien %d.\n", max, Nmax);
    printf(" - Gia tri nho nhat la %d, so lan xuat hien %d.\n", min, Nmin);
    return 0;
}
