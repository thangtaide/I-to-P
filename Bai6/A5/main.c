#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int a[10], nhap, vitri, so=0, i, j, dk;
    printf("Moi ban nhap 1 so trong khoang 0-100: ");
    scanf("%d", &nhap);
    printf("Day so ngau nhien: ");
    srand(time(NULL));
    for(i=0; i<10; i++)
    {
         do
         {
              a[i] = rand()%101;
              dk = 0;
              for(j=2; j<=sqrt(a[i]); j++)
              {
                   if(a[i]%j == 0)
                   {
                        dk = 1;
                        break;
                   }
              }
         }while(dk || a[i] == 0 || a[i] == 1);
         printf("%d ", a[i]);
         if(nhap == a[i])
         {
              if(so == 0) vitri = i+1;
              so++;
         }
    }
    if(so) printf("\nVi tri xuat hien dau tien la %d va so lan xuat hien la %d.\n", vitri, so);
    else printf("\nSo vua nhap khong xuat hien trong day.\n");
    return 0;
}
