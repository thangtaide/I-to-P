#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=200; i<=300; i++){
      if((i%9)==0) printf("%d\n",i);
    }
}
