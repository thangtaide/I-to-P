#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Xa, Xb, Xc, Xd, Ya, Yb, Yc, Yd;
    float Gab, Gac, Gbc, Gad, Gbd, Dab, Dbc, Dac, dk=0;

    printf("Moi nhap toa do 3 diem:\n");
    printf("Diem A: Xa = ");
    scanf("%f", &Xa);
    printf("Ya = ");
    scanf("%f", &Ya);
    printf("Diem B: Xb = ");
    scanf("%f", &Xb);
    printf("Yb = ");
    scanf("%f", &Yb);
    printf("Diem C: Xc = ");
    scanf("%f", &Xc);
    printf("Yc = ");
    scanf("%f", &Yc);
    printf("Diem D: Xd = ");
    scanf("%f", &Xd);
    printf("Yd = ");
    scanf("%f", &Yd);

    if(Ya!=Yb || Yb!=Yc || Yc!=Ya){
          Gab = (Xa-Xb)/(Ya-Yb); // Biến G là hệ số góc của cạnh AB.
          Gac = (Xa-Xc)/(Ya-Yc);
          Gbc = (Xb-Xc)/(Yb-Yc);
          Gad = (Xa-Xd)/(Ya-Yd);
          Gbd = (Xb-Xd)/(Yb-Yd);

          Dab = Xa - Ya*Gab;//Đường thẳng AB: Y*Gab - X + Dab = 0
          Dac = Xa - Ya*Gac;
          Dbc = Xb - Yb*Gbc;

          if((Yd*Gab-Xd+Dab)*(Yc*Gab-Xc+Dab) < 0) dk++; //Xét D cùng hay khác phía với C so với AB
          if((Yd*Gac-Xd+Dac)*(Yb*Gac-Xb+Dac) < 0) dk++;
          if((Yd*Gbc-Xd+Dbc)*(Ya*Gbc-Xa+Dbc) < 0) dk++;
    }
    else{
          Gab = (Ya-Yb)/(Xa-Xb);
          Gac = (Ya-Yc)/(Xa-Xc);
          Gbc = (Yb-Yc)/(Xb-Xc);
          Gad = (Ya-Yd)/(Xa-Xd);
          Gbd = (Yb-Yd)/(Xb-Xd);

          Dab = Xa*Gab - Ya;//Y - X*Gab + Dab = 0
          Dac = Xa*Gac - Ya;
          Dbc = Xb*Gbc - Yb;

          if((Yd-Xd*Gab+Dab)*(Yc-Xc*Gab+Dab) < 0) dk=1;
          if((Yd-Xd*Gac+Dac)*(Yb-Xb*Gac+Dac) < 0) dk=1;
          if((Yd-Xd*Gbc+Dbc)*(Ya-Xa*Gbc+Dbc) < 0) dk=1;
    }

    if(Gab != Gbc)
    {
          printf("Toa do vua nhap la 3 dinh cua tam giac.\n");
          if(Gad == Gab &&  ((Xd-Xa)*(Xd-Xb)) < 0) printf("Diem D nam tren canh AB.\n");// (Xd-Xa)*(Xd-Xb) để xác định điểm D có nằm trên canh AB không.
          else if(Gad == Gac &&  ((Xd-Xa)*(Xd-Xc)) < 0) printf("Diem D nam tren canh AC.\n");
          else if(Gbd == Gbc &&  ((Xd-Xb)*(Xd-Xc)) < 0) printf("Diem D nam tren canh BC.\n");
          else if(dk) printf("Diem D nam ngoai tam giac ABC.\n");
          else printf("Diem D nam trong tam giac ABC.\n");
    }
    else printf("Toa do vua nhap A B C khong la 3 dinh tam giac.\n");
    return 0;
}
