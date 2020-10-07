#include <stdio.h>
#include <stdlib.h>

int power(int a, int n){
      int i, pow = 1;
      for(i=1; i<=n; i++){
            pow *= a;
      }
      return pow;
}

int main()
{
    int a, n;
    printf("Moi nhap 2 so a va n: ");
    scanf("%d %d", &a, &n);
    printf("Ket qua cua a mu n la: %d\n", power(a, n));
    return 0;
}
