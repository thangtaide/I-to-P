#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float a[5][7];
    printf("Moi nhap diem cho cac hoc vien theo thu tu CF-C-HDJ-DW-RDBMS-Java:\n");
    for(i=0; i<5; i++)
    {
         a[i][6] = 0;
         printf("Hoc vien thu %d:\n", i+1);
         for(j=0; j<6; j++)
         {
              scanf("%f", &a[i][j]);
              a[i][6] +=a[i][j];
         }
         a[i][6] /=6;
    }
    printf("Hoc vien |  CF  |  C   | HDJ  |  DW  | RDBMS| Java | TB\n");
    printf("-----------------------------------------------------------\n");
    for(i=0; i<5; i++)
    {
         printf("HV %d     ", i+1);
         for(j=0; j<7; j++) printf("|%5.1f ", a[i][j]);
         printf("\n");
    }
    return 0;
}
