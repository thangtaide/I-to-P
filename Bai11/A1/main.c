#include <stdio.h>
#include <stdlib.h>

struct Mark{
      char subject[80];
      float written;
      float practical;
};

int main()
{
    struct Mark m;
    printf("Moi nhap ten mon hoc: ");
    fflush(stdin);
    gets(m.subject);
    printf("Moi nhap diem thi ly thuyet: ");
    scanf("%f", &m.written);
    printf("Moi nhap diem thi thuc hanh: ");
    scanf("%f", &m.practical);
    printf("\n\nTHONG TIN VE DIEM\n-----------------\n");
    printf("Mon hoc: %s\n", m.subject);
    printf("Diem LT: %.2f\n", m.written);
    printf("Diem TH: %.2f\n", m.practical);
    printf("Diem TB: %.2f\n", (m.practical+m.written)/2);
    return 0;
}
