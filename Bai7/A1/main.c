#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, dk, arr[99], temp;
    printf("So phan tu cua mang: ");
    scanf("%d", &n);
    printf("Moi nhap du lieu cac phan tu mang:\n");
    for(i=0; i<n; i++)
    {
          printf("Phan tu thu %d: ", i+1);
          scanf("%d", &arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
          dk = 1;
          for(j=0; j<n-i-1; j++)
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
    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for(i=0; i<n; i++)
    {
          printf("%d; ", arr[i]);
    }
    return 0;
}
