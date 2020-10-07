#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, songuyento=4, i, j, dk, sl=2;
    printf("Moi nhap so nguyen n: ");
    scanf("%d", &n);
    printf("%d so nguyen to dau tien la:\n", n);
    if(n==1) printf("2");
    else if (n==2) printf("2 3");
    else
    {
      printf("2 3");
      while(sl != n)
      {
            dk=1;
            songuyento++;
            for(i=2; i < (songuyento/2); i++)
            {
                  if((songuyento%i) == 0)
                  {
                        dk--;
                        break;
                  }
            }
            if(dk)
            {
                  printf(" %d", songuyento);
                  sl++;
            }
      }
    }
    return 0;
}
