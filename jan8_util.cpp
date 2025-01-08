#include "jan8_util.h"

int sum_of_odd_nums(){
  int res = 0;
  for(int i=0; i<100; i++){
    if(i%2 == 1){
      res += i;
    }
  }
  return res;
}

int sum_of_digits(int n){
  int num = n;
  int res = 0;
  while(num > 0){
    res += num % 10;
    num = num / 10;
  }
  return res;
}


