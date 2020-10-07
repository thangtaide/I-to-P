#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[9]={3, 5, 2, 7, 8, 9, 1, 6, 4}, i, j, k, dk;
    for(i=0; i<9; i++)
    {
          for(j=i+1; j<9; j++)
          {
                dk=0;
                swap(&a[i],&a[j]);
                for(k=0; k<9; k++)
                {
                      if(a[i]==k+1 && a[k]==i+1 && i!=k && a[k] == k+1)
                      {
                            dk=1;
                            break;
                      }
                }
                if(dk) printf("%d va %d\n", i+1, j+1);
                else swap(&a[i],&a[j]);
          }
    }
    return 0;
}
