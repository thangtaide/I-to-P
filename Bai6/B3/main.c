#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5], i, j;
    for(i=0; i<5; i++)
    {
          for(j=0; j<5; j++)
          {
                a[i][j] = 0;
          }
    }
    a[0][0]=1;
    for(i=1; i<5; i++)
    {
          for(j=0; j<5; j++)
          {
                if(j <= i && j != 0) a[i][j] = a[i-1][j-1] + a[i-1][j];
                else if(j==0) a[i][j] = 1;
                else a[i][j] = 0;
          }
    }
    for(i=0; i<5; i++)
    {
          for(j=0; j<5-i; j++) printf("  ");
          for(j=0; j<5; j++)
          {
                if(a[i][j] != 0 && i != j) printf(" %d .", a[i][j]);
                else if(a[i][j] != 0 && i==j) printf(" %d\n\n", a[i][j]);
          }
    }
    return 0;
}
