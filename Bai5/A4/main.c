#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    do{
      printf("\n SO THICH CA NHAN.\n");
      printf("===================\n");
      printf("1. Doc sach\n");
      printf("2. Nghe nhac\n");
      printf("3. Choi the thao\n");
      printf("4. May tinh\n");
      printf("5. Thoat\n");
      printf("===================\n");
      printf("Chon: ");
      scanf("%d", &choice);
      switch(choice)
      {
      case 1:
            printf("Ban thich doc sach!\n");
            break;
      case 2:
            printf("Ban thich nghe nhac!\n");
            break;
      case 3:
            printf("Ban thich choi the thao!\n");
            break;
      case 4:
            printf("Ban thich may tinh!\n");
            break;
      case 5:
            printf("Hen gap lai!\n");
            break;
      default:
            printf("Ban nhap sai. Moi nhap lai so tu 1-5\n");
            break;
      }
    }while(choice != 5);
    return 0;
}
