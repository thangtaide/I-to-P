#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, temp;
    printf("Moi nhap vao 2 so nguyen: ");
    scanf("%d%d", &n, &m);
    if(n>m){
      temp=m;
      m=n;
      n=temp;
    }
    for(i=n; i<=m; i++){
      if((i%7)==0) printf("%d ", i);
    }
    return 0;
}
