#include <stdio.h>
#include <stdlib.h>

int main(){
  int prev = 0;
  int curr = 1;
  int sum = 0;
  while (curr < 4000000){
    if (curr % 2 == 0){
      sum += curr;
    }
    curr += prev;
    prev = curr - prev;
  }
  printf("%d\n",sum);
  return 0;
}
