#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, n;
    char chuoi[30];
    printf("Moi ban nhap vao mot chuoi: ");
    fflush(stdin);
    gets(chuoi);
    n = strlen(chuoi);
    for(i=0; i<n; i++){
      if(chuoi[i] == ' ' && chuoi[i+1] == ' ' || chuoi[0] == ' '){
            for(j=i; j<n; j++){
                  chuoi[j] = chuoi[j+1];
            }
            i--;
            n--;
      }
      if(chuoi[n-1] == ' '){
      chuoi[n-1] = '\0';
      n--;
      }
    }
    if(chuoi[0] > 96 && chuoi[0] < 123) chuoi[0] -=32;
    printf("Chuoi sau khi chuan hoa: \"%s\"\n", chuoi);
    return 0;
}
