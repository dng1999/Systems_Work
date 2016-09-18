#include <stdio.h>
#include <stdlib.h>

int main(){
  short num;
  int sum = 0;
  for (num = 1; num<1000; num++){
    if (num % 3 == 0 || num % 5 == 0){
      sum += num;
      //printf("valid num: %d\n",num);
    }
  }
  printf("%d\n",sum);
  return 0;
}
