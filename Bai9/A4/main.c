#include <stdio.h>
#include <stdlib.h>

int MENU(){
      char choose;
      printf("+-----------------------------------------------+\n");
      printf("|\t\tMENU\t\t\t\t|\n");
      printf("+-----------------------------------------------+\n");
      printf("| 1. Menu 1\t\t\t\t\t|\n");
      printf("| 2. Menu 2\t\t\t\t\t|\n");
      printf("| 3. Menu 3\t\t\t\t\t|\n");
      printf("| 4. Menu 4\t\t\t\t\t|\n");
      printf("| 5. Exit\t\t\t\t\t|\n");
      printf("+-----------------------------------------------+\n");
      printf("\tPlease choose: ");
      do{
            fflush(stdin);
            scanf("%c", &choose);
            if(choose > '5' || choose < '1') printf("Entered incorrectly, re-enter: ");
      }while(choose > '5' || choose < '1');
      choose -= 48;
      return choose;
}

int main()
{
    int choose;
    do{
      choose = MENU();
      if(choose >= 1 && choose < 5) printf("doing menu %d...\n", choose);
      else if (choose == 5) printf("Exit...\n");
    }while(choose != 5);
    return 0;
}
