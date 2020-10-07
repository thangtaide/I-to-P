#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct DoiBong{
      char id[6];
      char name[20];
      char hlv[20];
      int win;
      int lose;
      int draw;
      int diem;
}DoiBong;

typedef struct LichThiDau{
      char tran[40];
      char doi1[20];
      char doi2[20];
      int ngay;
      int thang;
      int nam;
      char gio[6];
      char diadiem[30];
}LichThiDau;

void chuanhoa(char chuoi[]){
      int n, i, j;
      n = strlen(chuoi);
      for(i=0; i<n; i++){
            if(chuoi[i] == ' ' && chuoi[i+1] == ' ' || chuoi[0] == ' '){
                  for(j=i; j<n; j++){
                        chuoi[j] = chuoi[j+1];
                  }
                  i--;
                  n--;
            }
            else if(chuoi[i] == ' ' && chuoi[i+1] > 96 && chuoi[i+1] < 123) chuoi[i+1] -=32;
            else if(chuoi[i] != ' ' && chuoi[i+1] > 64 && chuoi[i+1] < 91) chuoi[i+1] +=32;
            if(chuoi[n-1] == ' '){
            chuoi[n-1] = '\0';
            n--;
            }
      }
      if(chuoi[0] > 96 && chuoi[0] < 123) chuoi[0] -=32;
}

void them(DoiBong *a){
      printf("Nhap ten doi: ");
      fflush(stdin);
      gets(a->name);
      printf("Nhap ten huan luyen vien: ");
      fflush(stdin);
      gets(a->hlv);
      chuanhoa(a->hlv);
      a->draw = 0;
      a->win = 0;
      a->lose = 0;
      a->diem = 0;
}

void themlich(LichThiDau *a){
      int dk=1;
      do{
            printf("Ngay thi dau: ");
            fflush(stdin);
            scanf("%d/%d/%d",&a->ngay,&a->thang,&a->nam);
            if(a->ngay<1 || a->ngay>31 || a->thang<1 ||a->thang>12 || a->nam<2020){
                  printf("Ngay thi dau khong hop le! Moi nhap lai.\n");
            }
            else dk = 0;
      }while(dk);
      printf("Gio thi dau: ");
      fflush(stdin);
      gets(a->gio);
      printf("San thi dau: ");
      fflush(stdin);
      gets(a->diadiem);
}

void sua(DoiBong *a){
      char name[20], hlv[20], yn;
      printf("Sua ten doi: ");
      fflush(stdin);
      gets(name);
      printf("Sua ten huan luyen vien: ");
      gets(hlv);
      printf("\nBan muon cap nhat thong tin?(Y/N) ");
      fflush(stdin);
      yn = getchar();
      while(yn != 'Y' && yn != 'N'){
            printf("\nKi tu vua nhap khong hop le! Moi nhap lai(Y/N)");
            fflush(stdin);
            yn = getchar();
      }
      if(yn == 'Y'){
            strcpy(a->name, name);
            strcpy(a->hlv, hlv);
            printf("\nThong tin da duoc cap nhat!\n");
      }
      else printf("\nThong tin chua duoc cap nhat!\n");
}

void in(DoiBong *a){
      int i;
      printf("| %-8s", a->id);
      printf("| %-23s", a->name);
      printf("| %-19s", a->hlv);
      printf("|\n");
}

int kiemtra(LichThiDau *lich, DoiBong db[], int count){
      int i, j, n, dk=2;
      n=strlen(lich->tran);
      for(i=0; i<n; i++){
            if(lich->tran[i]==' ' && lich->tran[i+1]=='v' && lich->tran[i+2]=='s' && lich->tran[i+3]==' '){
                  for(j=0; j<i; j++){
                        lich->doi1[j] = lich->tran[j];
                  }
                  lich->doi1[i] = '\0';

                  for(j=i+4; j<n; j++){
                        lich->doi2[j-i-4] = lich->tran[j];
                  }
                  lich->doi2[n-i-4] = '\0';
            }
      }
      for(i=0; i<count; i++){
            if(strcmp(lich->doi1, db[i].name) == 0) dk--;
            else if(strcmp(lich->doi2, db[i].name) == 0) dk--;
      }
      return dk;
}

void inlich(LichThiDau a){
      int i;
      printf("| %-24s", a.tran);
      printf("| %-6s", a.gio);
      printf("%02d/%02d/%d ", a.ngay, a.thang, a.nam);
      printf("| %-11s", a.diadiem);
      printf("|\n");
}

void capnhat(LichThiDau lich, DoiBong db[], int count){
      char yn;
      int doi1, doi2, i;
      printf("Ket qua %s: ", lich.doi1);
      scanf("%d", &doi1);
      printf("Ket qua %s: ", lich.doi2);
      scanf("%d", &doi2);
      printf("\nBan muon cap nhat thong tin?(Y/N) ");
      fflush(stdin);
      yn = getchar();
      while(yn != 'Y' && yn != 'N'){
            printf("\nKi tu vua nhap khong hop le! Moi nhap lai(Y/N)");
            fflush(stdin);
            yn = getchar();
      }
      if(yn == 'Y'){
            for(i=0; i<count; i++){
                  if(strcmp(lich.doi1, db[i].name) == 0){
                        if(doi1 == doi2){
                              db[i].draw++;
                              db[i].diem++;
                        }
                        else if(doi1 > doi2){
                              db[i].win++;
                              db[i].diem +=3;
                        }
                        else db[i].lose++;
                  }
                  else if(strcmp(lich.doi2, db[i].name) == 0){
                        if(doi1 == doi2){
                              db[i].draw++;
                              db[i].diem++;
                        }
                        else if(doi1 < doi2){
                              db[i].win++;
                              db[i].diem +=3;
                        }
                        else db[i].lose++;
                  }
            }
            printf("\nThong tin da duoc cap nhat!\n");
      }
      else printf("\nThong tin chua duoc cap nhat!\n");
}

void sapxep(DoiBong db[], int count){
      int i, j;
      DoiBong temp;
      for(i=0; i<count; i++){
            for(j=i; j<count; j++){
                  if(db[i].diem < db[j].diem){
                        temp = db[i];
                        db[i] = db[j];
                        db[j] = temp;
                  }
            }
      }
}

void ThongKe(DoiBong db){
      int i, tran;
      printf("| %-7s", db.id);
      printf("| %-23s", db.name);
      tran = db.draw + db.win + db.lose;
      printf("|  %2d  |  %2d |  %2d |  %2d  |  %2d  |", tran, db.win, db.draw, db.lose, db.diem);
      printf("\n");
}

void CN1(DoiBong db[], int *count){
      char choose, yn, id[6];
      int dkid, i;
      do{
            system("cls");
            printf("\n+---------------------------------------+\n");
            printf("|    Quan li danh sach doi bong         |\n");
            printf("+---------------------------------------+\n");
            printf("| 1. Xem danh sach doi bong             |\n");
            printf("| 2. Cap nhat thong tin doi bong        |\n");
            printf("| 3. Them moi mot doi bong              |\n");
            printf("| 0. Tro ve menu chinh                  |\n");
            printf("+---------------------------------------+\n");
            printf("     Moi nhap lua chon cua ban: ");
            fflush(stdin);
            choose = getchar();
            switch(choose){
            case '1':
                  if(!(*count)) printf("\nDanh sach doi bong trong.\n");
                  else{
                        system("cls");
                        printf("\n+-------------------------------------------------------+\n");
                        printf("|                 Danh sach doi bong                    |\n");
                        printf("+-------------------------------------------------------+\n");
                        printf("| Ma doi  | Ten doi                | Huan luyen vien    |\n");
                        printf("+-------------------------------------------------------+\n");
                        for(i=0; i<*count; i++) {
                              printf("| %-8s| %-23s| %-19s|\n", db[i].id, db[i].name, db[i].hlv);
                        }
                        printf("+-------------------------------------------------------+\n");
                  }
                  printf("\nBam mot phim bat ki de tiep tuc ...");
                  fflush(stdin);
                  getchar();
                  break;
            case '2':
                  if(!(*count)) printf("\nDanh sach doi bong trong.\n");
                  else{
                        system("cls");
                        printf("\n====Cap nhat thong tin doi bong====\n");
                        do{
                              dkid = 1;
                              do{
                                    printf("\nNhap ma doi: ");
                                    fflush(stdin);
                                    gets(id);
                                    for(i=0; i<(*count); i++){
                                          if(strcmp(id, db[i].id) == 0){
                                               dkid = 0;//tra ve 0 neu 2 ma doi giong nhau
                                               sua(&db[i]);
                                               break;
                                          }
                                    }
                                    if(dkid) printf("Ma doi khong ton tai! Moi nhap lai!\n");
                              }while(dkid);
                              printf("\nBan co muon tiep tuc?(Y/N) ");
                              fflush(stdin);
                              yn = getchar();
                              while(yn != 'Y' && yn != 'N'){
                                    printf("\nKi tu vua nhap khong hop le! Moi nhap lai(Y/N) ");
                                    fflush(stdin);
                                    yn = getchar();
                              }
                        }while(yn == 'Y');
                        printf("\n===================================\n");
                  }
                  break;
            case '3':
                  system("cls");
                  printf("\n=============Them doi bong=========\n");
                  do{
                        do{
                              dkid = 0;
                              printf("\nNhap ma doi: ");
                              fflush(stdin);
                              gets(db[*count].id);
                              for(i=0; i<*count; i++){
                                    if(strcmp(db[*count].id, db[i].id) == 0){
                                         dkid = 1;
                                         printf("Ma doi da ton tai! Moi nhap lai!\n");
                                         break;
                                    }
                              }
                        }while(dkid);
                        them(&db[*count]);
                        (*count)++;
                        printf("\nBan co muon tiep tuc?(Y/N) ");
                        fflush(stdin);
                        yn = getchar();
                        while(yn != 'Y' && yn != 'N'){
                              printf("\nKi tu vua nhap khong hop le! Moi nhap lai(Y/N) ");
                              fflush(stdin);
                              yn = getchar();
                        }
                  }while(yn == 'Y');
                  printf("\n===================================\n");
                  break;
            case '0':
                  break;
            default:
                  printf("Khong co chuc nang nay. Moi ban nhap lai.\n");
                  break;
            }
      }while(choose != '0');
}

void CN2(LichThiDau lich[], int *count2, DoiBong db[], int count){
      char choose, yn, tran[30];
      int dkid, i;
      do{
            system("cls");
            printf("\n+-------------------------------+\n");
            printf("|    Quan li lich thi dau\t|\n");
            printf("+-------------------------------+\n");
            printf("| 1. Xem lich thi dau\t\t|\n");
            printf("| 2. Tao lich thi dau\t\t|\n");
            printf("| 0. Tro ve menu chinh\t\t|\n");
            printf("+-------------------------------+\n");
            printf("   Moi nhap lua chon cua ban: ");
            fflush(stdin);
            choose = getchar();
            switch(choose){
            case '1':
                  if(!(*count2)) printf("\nDanh sach lich thi dau trong.\n");
                  else{
                        system("cls");
                        printf("\n+---------------------------------------------------------+\n");
                        printf("|               Danh sach lich thi dau                    |\n");
                        printf("+---------------------------------------------------------+\n");
                        printf("|         Tran dau        |     Thoi gian    |  Dia diem  |\n");
                        printf("+---------------------------------------------------------+\n");
                        for(i=0; i<*count2; i++) inlich(lich[i]);
                        printf("+---------------------------------------------------------+\n");
                  }
                  printf("\nBam mot phim bat ki de tiep tuc ...");
                  fflush(stdin);
                  getchar();
                  break;
            case '2':
                  system("cls");
                  printf("\n===========Tao lich thi dau========\n");
                  do{
                        do{
                              dkid = 0;
                              printf("\nTran: ");
                              fflush(stdin);
                              gets(lich[*count2].tran);
                              if(kiemtra(&lich[*count2], db, count)){
                                    printf("Tran dau co doi bong khong ton tai!! Moi nhap lai\n");
                                    dkid=1;
                              }
                              for(i=0; i<*count2; i++){
                                    if(strcmp(lich[*count2].tran, lich[i].tran) == 0){
                                         dkid = 1;
                                         printf("Tran dau da ton tai! Moi nhap lai!\n");
                                         break;
                                    }
                              }
                        }while(dkid);
                        themlich(&lich[*count2]);
                        (*count2)++;
                        printf("\nBan co muon tiep tuc?(Y/N) ");
                        fflush(stdin);
                        yn = getchar();
                        while(yn != 'Y' && yn != 'N'){
                              printf("\nKi tu vua nhap khong hop le! Moi nhap lai(Y/N) ");
                              fflush(stdin);
                              yn = getchar();
                        }
                  }while(yn == 'Y');
                  printf("\n===================================\n");
                  break;
            case '0':
                  break;
            default:
                  printf("Khong co chuc nang nay. Moi ban nhap lai.\n");
                  break;
            }
      }while(choose != '0');
}

void CN3(LichThiDau lich[], DoiBong db[], int count2, int count){
      char yn, tran[30];
      int i, dklich;
      if((!(count)) || (!(count2))){
            if(!(count)) printf("\nDanh sach doi bong trong.\n");
            if(!(count2)) printf("\nDanh sach lich thi dau trong.\n");
      }
      else{
            system("cls");
            printf("\n=====Cap nhat ket qua thi dau======\n");
            do{
                  dklich = 1;
                  do{
                        printf("\nTran: ");
                        fflush(stdin);
                        gets(tran);
                        for(i=0; i<count2; i++){
                              if(strcmp(tran, lich[i].tran) == 0){
                                    dklich = 0;//tra ve 0 neu 2 lich thi dau giong nhau
                                    capnhat(lich[i], db, count);
                                    break;
                              }
                        }
                        if(dklich) printf("Tran dau khong ton tai! Moi nhap lai!\n");
                  }while(dklich);
                  printf("\nBan co muon tiep tuc?(Y/N) ");
                  fflush(stdin);
                  yn = getchar();
                  while(yn != 'Y' && yn != 'N'){
                        printf("\nKi tu vua nhap khong hop le! Moi nhap lai(Y/N) ");
                        fflush(stdin);
                        yn = getchar();
                  }
            }while(yn == 'Y');
            printf("\n===================================\n");
      }
}

void CN4(DoiBong db[], int count){
      int i;
      if(!(count)) printf("\nDanh sach doi bong trong.\n");
      else{
            system("cls");
            sapxep(db, count);
            printf("\n+------------------------------------------------------------------+\n");
            printf("|                   Danh sach doi bong                             |\n");
            printf("+------------------------------------------------------------------+\n");
            printf("| Ma doi | Ten doi                | Tran |Thang| Hoa | Thua | Diem |\n");
            printf("+------------------------------------------------------------------+\n");
            for(i=0; i<count; i++) ThongKe(db[i]);
            printf("+------------------------------------------------------------------+\n");
      }
      printf("\nBam mot phim bat ki de tiep tuc ...");
      fflush(stdin);
      getchar();
}

int main(){
      int i, j, tran, diem;
      int count=0;//count la so doi bong
      int count2=0;//count2 la so lich thi dau
      char choose;
      FILE *team, *schedule;
      DoiBong *db = malloc(20*sizeof(DoiBong));
      LichThiDau *lich = malloc(20*sizeof(LichThiDau));

      team = fopen("VL2018Teams.dat", "a+b");
            if(team != NULL){
                  fread(&count, sizeof(int), 1, team);
                  if(count > 0) fread(db, sizeof(DoiBong), count, team);
                  else count =0;
                  fclose(team);
            }
            else printf("Can't read text file.\n");
      schedule = fopen("VL2018Schedule.dat", "a+b");
            if(schedule != NULL){
                  fread(&count2, sizeof(int), 1, schedule);
                  if(count2 > 0) fread(lich, sizeof(LichThiDau), count2, schedule);
                  else count2 = 0;
                  fclose(schedule);
            }
            else printf("Can't read text file.\n");
      do{
            system("cls");
            printf("\n+---------------------------------------+\n");
            printf("|    Chao mung den voi V-League 2018\t|\n");
            printf("+---------------------------------------+\n");
            printf("| 1. Quan li danh sach doi bong\t\t|\n");
            printf("| 2. Quan li lich thi dau\t\t|\n");
            printf("| 3. Quan li ket qua thi dau\t\t|\n");
            printf("| 4. Thong ke \t\t\t\t|\n");
            printf("| 0. Thoat chuong trinh\t\t\t|\n");
            printf("+---------------------------------------+\n");
            printf("     Moi nhap lua chon cua ban: ");
            fflush(stdin);
            choose = getchar();
            switch(choose){
            case '1':
                  CN1(db, &count);
                  break;

            case '2':
                  CN2(lich, &count2, db, count);
                  break;

            case '3':
                  CN3(lich, db, count2, count);
                  break;

            case '4':
                  CN4(db, count);
                  break;

            case '0':
                  printf("\nKet thuc chuong trinh ...\n");
                  break;
            default:
                  printf("Khong co chuc nang nay. Moi ban nhap lai.\n");
                  break;
            }
      }while(choose != '0');

      team = fopen("VL2018Teams.dat", "wb");
            if(team != NULL){
                  fwrite(&count, sizeof(int), 1, team);
                  fwrite(db, sizeof(DoiBong), count, team);
                  fclose(team);
            }
            else printf("Can't read text file.\n");
      schedule = fopen("VL2018Schedule.dat", "wb");
            if(schedule != NULL){
                  fwrite(&count2, sizeof(int), 1, schedule);
                  fwrite(lich, sizeof(LichThiDau), count2, schedule);
                  fclose(schedule);
            }
            else printf("Can't read text file.\n");

      free(db);
      free(lich);
      return 0;
}

