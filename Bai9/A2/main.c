#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int inputNumber(){
      int a;
      scanf("%d", &a);
      return a;
}

int checkNumber(int a){
      int i;
      if(a > 1){
            for(i=2; i<=sqrt(a); i++){
                  if(a%i == 0){
                        return 0;
                        break;
                  }
            }
            return 1;
      }else return 0;
}

int main()
{
    int arr[7], i;
    printf("Moi nhap gia tri mang:\n");
    for(i=0; i<7; i++){
      printf("Phan tu thu %d: ", i+1);
      arr[i] = inputNumber();
    }
    printf("Cac so nguyen to trong day vua nhap la: ");
    for(i=0; i<7; i++){
      if(checkNumber(arr[i])) printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
