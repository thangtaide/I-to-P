#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[100], i, j, temp, dk;
    srand(time(NULL));
    for(i=0; i<100; i++)
    {
          if(i%10 == 0) printf("\n");
          else printf("\t");
          arr[i] = rand() % 1001;
          printf("%d", arr[i]);
    }
    for(i=0; i<99; i++)
    {
          dk = 1;
          for(j=0; j<99-i; j++)
          {
                if(arr[j] > arr[j+1])
                {
                      temp = arr[j];
                      arr[j] = arr[j+1];
                      arr[j+1] = temp;
                      dk = 0;
                }
          }
          if(dk) break;
    }
    printf("\n\nDay so sau khi sap xep:\n");
    for(i=0; i<100; i++)
    {
          if(i%10 == 0) printf("\n");
          else printf("\t");
          printf("%d", arr[i]);
    }
    int a, l, r, m;
    l = 0;
    r = 99;
    printf("\n\nMoi nhap so can tim: ");
    scanf("%d", &a);
    while(r >= l)
    {
          m = (l+r)/2;
          if(arr[m] == a)
          {
                while(arr[m] == arr[m-1])
                {
                      m = m-1;
                }
                printf("Vi tri dau tien xuat hien la %d.\n", m+1);
                break;
          }
          else if(arr[m] > a)
          {
                r = m-1;
          }
          else l = m+1;
    }
    if(arr[m] != a) printf("So vua nhap khong co trong mang.\n");
    return 0;
}
