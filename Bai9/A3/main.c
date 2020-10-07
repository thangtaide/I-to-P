#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
      int i, n1 = 1, n2 = 1, temp;
      if(n == 1 || n == 2) return 1;
      else if(n < 1) return 0;
      else{
            for(i=2; i<n; i++){
                  temp = n1;
                  n1 += n2;
                  n2 = temp;
            }
            return n1;
      }
}
int main()
{
    int n, fib;
    printf("Moi ban nhap n: ");
    scanf("%d", &n);
    fib = fibonacci(n);
    if(fib) printf("So fibonacci thu %d la: %d\n", n, fib);
    else printf("So ban vua nhap khong hop le.\n");
    return 0;
}
