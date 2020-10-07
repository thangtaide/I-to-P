#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, X;
    printf("Moi nhap A: ");
    scanf("%d",&A);
    printf("Moi nhap B: ");
    scanf("%d",&B);
    if(A==0){
      (B==0)?printf("Phuong trinh co vo so nghiem.\n"):printf("Phuong trinh vo nghiem.\n");
    }
    else{
          X=-B/A;
          printf("Nghiem: %d\n",X);
    }
    return 0;
}
---------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int A, B, C;
    printf("Moi nhap A: ");
    scanf("%d", &A);
    printf("Moi nhap B: ");
    scanf("%d", &B);
    printf("Moi nhap C: ");
    scanf("%d", &C);

    if(A>B && A>C) printf("Max: A=%d", A);
    else if(B>C && B>A) printf("Max: B=%d", B);
    else if (C>A && C>B) printf("Max: C=%d", C);

    return 0;
}
