#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=1, n2=1, n, i, temp;
    printf("Moi nhap so nguyen n: ");
    scanf("%d", &n);
    if(n==1) printf("1");
    else if (n==2) printf("1 1");
    else{
      printf("1 1");
      for(i=2; i<=n; i++){
            temp = n2;
            n2 += n1;
            n1 = temp;
            printf(" %d", n2);
      }
    }
    printf("\n");
    return 0;
}
