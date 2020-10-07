#include <stdio.h>

int main()
{
    int thapphan, dk=1, nhiphan=0, so, i;
    printf("Nhap so thap phan: ");
    scanf("%d", &thapphan);
    while (thapphan > 0)
    {
        so = thapphan % 2;
        for(i=1; i<dk; i++)
        {
              so *=10;
        }
        nhiphan += so;
        dk++;
        thapphan /= 2;
    }
    printf("So nhi phan: ");
    if(nhiphan < 10000) printf("0");
    if(nhiphan < 1000) printf("0");
    if(nhiphan < 100) printf("0");
    if(nhiphan < 10) printf("0");
    printf("%d\n", nhiphan);
}
