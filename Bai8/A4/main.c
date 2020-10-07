#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr = NULL;
    printf("Moi nhap so phan tu mang: ");
    scanf("%d", &n);
    arr = malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
          printf("arr[%d] = ", i);
          scanf("%d", arr+i);
    }
    for(i=0; i<n; i++)
    {
          printf("arr[%d] = %d\n", i, *(arr+i));
    }
    free(arr);
    return 0;
}
