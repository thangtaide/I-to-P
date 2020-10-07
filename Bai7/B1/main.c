#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[99], count = 0, position, timkiem, i, j, dk, choice, temp;
    int l, r, m;
    while(1)
    {
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
          scanf("%d", &choice);
          switch(choice)
          {
          case 0:
            exit(0);
          case 1:
            printf("Nhap them phan tu cho mang.\nMoi ban nhap phan tu moi: ");
            scanf("%d", &arr[count]);
            count++;
            break;
          case 2:
            printf("Sua phan tu theo vi tri cua mang mang.\nMoi ban chon vi tri sua: ");
            scanf("%d", &position);
            if(position < 1 || position > count) printf("Vi tri nay khong co trong mang.\n");
            else
            {
                  printf("Phan tu sau khi sua: ");
                  scanf("%d", &arr[position-1]);
            }
            break;
          case 3:
            printf("Xoa phan tu mang mang theo vi tri.\nMoi ban chon vi tri xoa: ");
            scanf("%d", &position);
            if(position < 1 || position > count) printf("Vi tri nay khong co trong mang.\n");
            else
            {
                  for(i=position-1; i<count; i++)
                  {
                        arr[i] = arr[i+1];
                  }
                  count--;
            }
            break;
          case 4:
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
            break;
          case 5:
            printf("Tim kiem nhi phan mot phan tu trong mang.\nMoi ban nhap phan tu can tim kiem: ");
            scanf("%d", &timkiem);
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
            l = 0;
            r = count-1;
            while(r >= l)
            {
                  m = (l+r)/2;
                  if(arr[m] == timkiem)
                  {
                        printf("Phan tu can tim o vi tri %d.\n", m+1);
                        break;
                  }
                  else if(arr[m] < timkiem) r = m-1;
                  else l = m+1;
            }
            if(arr[m] != timkiem) printf("Phan tu vua nhap khong co trong mang.\n");
            break;
          case 6:
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
            break;
          case 7:
            printf("Chen them mot phan tu mang.\nMoi nhap vi tri phan tu: ");
            scanf("%d", &position);
            for(i=count; i>position-1; i--)
            {
                  arr[i] = arr[i-1];
            }
            count++;
            printf("Moi nhap phan tu moi: ");
            scanf("%d", &arr[position-1]);
            break;
          case 8:
            printf("Hien thi mang: ");
            for(i=0; i<count; i++)
            {
                  printf("%d; ", arr[i]);
            }
            printf("\n");
            break;
          default:
            printf("Chuc nang khong ton tai. Moi chon lai!\n");
            break;
          }
    }
    return 0;
}
