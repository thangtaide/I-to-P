#include <stdio.h>
#include <stdlib.h>

int main()
{
    char test;
    printf("Moi ban nhap ki tu:");
    scanf("%c", &test);
    if (('a' <= test && test <= 'z') || ('A' <= test && test <= 'Z'))
    {
        if (test=='u'||test=='e'||test=='o'||test=='a'||test=='i'||test=='U'||test=='E'||test=='O'||test=='A'||test=='I')
        {
            printf("Ki tu vua nhap la nguyen am.\n");
        }
        else
        {
            printf("Ki tu vua nhap la phu am.\n");
        }
    }
    else printf("Ki tu vua nhap khong thuoc bang chu cai.\n");
    return 0;
}
