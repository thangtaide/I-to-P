#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, n, nguyenam=0, tu=0;
    float phantram;
    char chuoi[80];
    printf("Moi ban nhap vao mot chuoi: ");
    fflush(stdin);
    gets(chuoi);
    n = strlen(chuoi);
    printf("\nChuoi vua nhap co %d ki tu.\n", n);
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
    for(i=0; i<n; i++){
      if(chuoi[i]=='i'||chuoi[i]=='a'||chuoi[i]=='o'||chuoi[i]=='e'||chuoi[i]=='u'||chuoi[i]=='I'||chuoi[i]=='A'||chuoi[i]=='O'||chuoi[i]=='E'||chuoi[i]=='U') nguyenam++;
      if(chuoi[i]==' ') tu++;
    }
    phantram = (float)nguyenam/(n-tu);
    printf("Chuoi co %d nguyen am va ti le xuat hien la %.2f%%\n", nguyenam, phantram*100);
    printf("Chuoi co %d tu.\n", tu+1);
    printf("Chuoi sau khi chuan hoa: \"%s\"\n", chuoi);
    return 0;
}
