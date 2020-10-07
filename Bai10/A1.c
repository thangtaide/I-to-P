#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     char chuoi[30], kitu;
     int i, count = 0;
     printf("Moi ban nhap chuoi ki tu: ");
     gets(chuoi);
     printf("Moi ban nhap mot ki tu: ");
     kitu = getchar();
     for(i=0; i<strlen(chuoi); i++){
           if(kitu == chuoi[i]) count++;
     }
     printf("\nSo lan xuat hien cua ki tu \"%c\" trong chuoi la %d lan.\n", kitu, count);
}
