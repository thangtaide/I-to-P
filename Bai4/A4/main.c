#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf ("Nhap 3 so bat ki: ");
    scanf ("%f%f%f", &a, &b, &c);

    if ((a+b > c) && (a+c > b) && (b+c > a) && (a>0) && (b>0) && (c>0))
    {
          printf("3 so vua nhap la 3 canh tam giac.\n");
    }
    else printf("3 so vua nhap khong la 3 canh tam giac.\n");
    return 0;
}
