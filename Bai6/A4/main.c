#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[5], dk, i, j;
    printf("Moi nhap 5 so nguyen to:\n");
    for(i=0; i<5; i++)
    {
        do
        {
             printf("So nguyen to thu %d: ", i+1);
             scanf("%d", &a[i]);

             if(a[i] > 1)
             {
                  dk=0;
                  for(j=2; j <= sqrt(a[i]); j++)
                  {
                       if(a[i] % j == 0)
                       {
                            dk = 1;
                            printf("So vua nhap khong phai so nguyen to! Moi nhap lai!\n\n");
                            break;
                       }

                  }
             }
             else dk = 1;
        }while(dk);
    }
    return 0;
}
