#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j;
    char chuoi[30];
    printf("Moi nhap chuoi can kiem tra: ");
    fflush(stdin);
    gets(chuoi);
    n = strlen(chuoi);
    for(i=0; i<n; i++){
      if(chuoi[i]<65 || (chuoi[i]>90 && chuoi[i]<97) || chuoi[i] > 122){
            for(j=i; j<n; j++){
                  chuoi[j] = chuoi[j+1];
            }
            n--;
            i--;
      }
      else if(chuoi[i] > 96 && chuoi[i] < 123) chuoi[i] -=32;
    }
    int dk = 1;
    for(i=0; i<n/2; i++){
      if(chuoi[i] != chuoi[n-i-1]){
            dk=0;
            break;
      }
    }
    if(dk) printf("Chuoi vua nhap la chuoi Palindrome!\n");
    else printf("Chuoi vua nhap khong phai chuoi Palindrome!\n");
    return 0;
}
