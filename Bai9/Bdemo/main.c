#include <stdio.h>
#include <stdlib.h>

int i, j;
int MENU(){
      int choose;
      printf("+-----------------------------------------------+\n");
      printf("|\t\t\tMENU\t\t\t|\n");
      printf("+-----------------------------------------------+\n");
      printf("| 1. Nhap them phan tu cho mang.\t\t|\n");
      printf("| 2. Sua phan tu theo vi tri cua mang mang\t|\n");
      printf("| 3. Xoa phan tu mang mang theo vi tri\t\t|\n");
      printf("| 4. Tim kiem tuyen tinh mot phan tu trong mang |\n");
      printf("| 5. Tim kiem nhi phan mot phan tu trong mang\t|\n");
      printf("| 6. Sap xep theo chieu giam dan\t\t|\n");
      printf("| 7. Chen them mot phan tu cho mang sao cho\t|\n|    danh sach sap xep van duoc bao toan\t|\n");
      printf("| 8. Hien thi mang\t\t\t\t|\n");
      printf("| 0. Thoat chuong trinh\t\t\t\t|\n");
      printf("+-----------------------------------------------+\n");
      printf("     Moi ban chon: ");
      scanf("%d", &choose);
      return choose;
}

int nhap(){
      int nhap;
      printf("Nhap them phan tu cho mang.\nMoi ban nhap phan tu moi: ");
      scanf("%d", &nhap);
      return nhap;
}

void sua(int count, int arr[]){
      int position;
      printf("Sua phan tu theo vi tri cua mang mang.\nMoi ban chon vi tri sua: ");
      scanf("%d", &position);
      if(position < 1 || position > count) printf("Vi tri nay khong co trong mang.\n");
      else{
            printf("Phan tu sau khi sua: ");
            scanf("%d", &arr[position-1]);
      }
}

void xoa(int *count, int arr[]){
      int position;
      printf("Xoa phan tu mang mang theo vi tri.\nMoi ban chon vi tri xoa: ");
      do{
            scanf("%d", &position);
            if(position < 1 || position > *count) printf("Vi tri nay khong co trong mang. Moi nhap lai: ");
            else{
                  for(i=position-1; i < *count; i++){
                        arr[i] = arr[i+1];
                  }
            }
      }while(position < 1 || position > *count);
      (*count)--;
}

void timkiem(int count, int arr[]){
      int timkiem, position=1;
      printf("Tim kiem tuyen tinh mot phan tu trong mang.\nMoi ban nhap phan tu can tim kiem: ");
      scanf("%d", &timkiem);
      for(i=0; i<count; i++)
      {
            if(arr[i] == timkiem)
            {
                  printf("Phan tu van can tim kiem o vi tri %d.\n", i+1);
                  position = i;
                  break;
            }
      }
      if(arr[position] != timkiem) printf("Phan tu vua nhap khong co trong mang.\n");
}

void timkiemNhiPhan(int count, int arr[]){
      int m, timkiem;
      int l = 0;
      int r = count-1;
      printf("Tim kiem nhi phan mot phan tu trong mang.\nMoi ban nhap phan tu can tim kiem: ");
      scanf("%d", &timkiem);
      while(r >= l){
            m = (l+r)/2;
            if(arr[m] == timkiem){
                  printf("Phan tu can tim o vi tri %d.\n", m+1);
                  break;
            }
            else if(arr[m] < timkiem) r = m-1;
            else l = m+1;
      }
      if(arr[m] != timkiem) printf("Phan tu vua nhap khong co trong mang.\n");
}

void sapxep(int count, int arr[]){
      int temp, dk;
      printf("Sap xep theo chieu giam dan.\n");
      for(i=0; i<count-1; i++)
      {
            dk = 1;
            for(j=0; j<count-i-1; j++)
            {
                  if(arr[j] < arr[j+1])
                  {
                        temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                        dk = 0;
                  }
            }
            if(dk) break;
      }
}

void inmang(int count, int arr[]){
      printf("Hien thi mang: ");
      for(i=0; i<count; i++)
      {
            printf("%d; ", arr[i]);
      }
      printf("\n");
}

void chen(int count, int arr[]){
      int position;
      printf("Chen them mot phan tu mang.\nMoi nhap vi tri phan tu: ");
      scanf("%d", &position);
      if(position > count) position = count;
      else{
            for(i=count; i>position-1; i--)
            {
                  arr[i] = arr[i-1];
            }
      }
      printf("Moi nhap phan tu moi: ");
      scanf("%d", &arr[position-1]);
}

int main()
{
    int choose, arr[99], count = 0, position;
    do{
      choose = MENU();
      switch(choose){
      case 1:
            arr[count] = nhap();
            count++;
            break;
      case 2:
            sua(count, arr);
            break;
      case 3:
            xoa(&count, arr);
            //count--;
            break;
      case 4:
            timkiem(count, arr);
            break;
      case 5:
            sapxep(count, arr);
            timkiemNhiPhan(count, arr);
            break;
      case 6:
            sapxep(count, arr);
            break;
      case 7:
            chen(count, arr);
            count++;
            break;
      case 8:
            inmang(count, arr);
            break;
      case 0:
            exit(0);
      default:
            printf("Chuc nang khong hop le. Moi chon lai!\n");
            break;
      }
    }while(1);
    return 0;
}
