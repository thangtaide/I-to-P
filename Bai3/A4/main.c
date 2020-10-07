#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km;
    printf("1 meter = 0.000621371192 mile\n");
    printf("------------------------------");
    printf("\nMoi ban nhap so km: ");
    scanf("%f",&km);
    printf("Ket qua:\n%.2f km = %.6f mile",km,km*0.621371192);
    return 0;
}
