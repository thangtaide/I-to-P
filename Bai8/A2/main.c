#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5], i;
    printf("Moi nhap gia tri cua mang:\n");
    for(i=0; i<5; i++)
    {
          printf("arr[%d] = ", i);
          scanf("%d", arr+i);
    }
    printf("Mang la: ");
    for(i=0; i<5; i++)
    {
          printf("%d; ", *(arr+i));
    }
    printf("\n");
    return 0;
}
