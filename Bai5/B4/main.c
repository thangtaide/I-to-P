#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5], so, i;
    printf("Mo nhap so can chuyen sang he nhi phan: ");
    scanf("%d", &so);
    printf("Bieu dien nhi phan la: ");
    for(i=0; i<5; i++)
    {
          a[i] = so%2;
          so /=2;
    }
    for(i=4; i>=0; i--)
    {
          printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
