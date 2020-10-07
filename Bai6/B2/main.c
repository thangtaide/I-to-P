#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char c[10];
    printf("Moi nhap vao 10 ki tu a-z:\n");
    for(i=0; i<10; i++)
    {
         do
         {
              printf("Ki tu thu %d: ", i+1);
              fflush(stdin);
              scanf("%c", &c[i]);
              if(c[i] < 97 || c[i] > 122) printf("Ki tu vua nhap khong thuoc a-z. Moi nhap lai!\n");
         }while(c[i] < 97 || c[i] > 122);
         c[i] -= 32;
    }
    printf("Chu in hoa cua cac ki tu vua nhap la: ");
    for(i=0; i<10; i++) printf("%c ", c[i]);
    printf("\n");
    return 0;
}
