#include "jan13_util.h"

// iterative version of sumOfDigits (last week)
int sumOfDigits(int n) {
  int res = 0;
  while (n > 0) {
    res += (n % 10);
    n = n / 10;
  }
  return res;
}

// recursive version of sumOfDigits
int sumOfDigitsRec(int n) {
  if(n != 0){
    return (n % 10) + sumOfDigitsRec(n / 10);
  }
  return 0;
}

// recursive version of digital root
int digitalRootRec(int n) {
  if(sumOfDigitsRec(n) > 9){
    return digitalRootRec(sumOfDigitsRec(n));
  }
  return sumOfDigitsRec(n);
}

// iterative version of digital root
int digitalRoot(int n) {
  int res = sumOfDigits(n);
  while (res > 9) {
    res = sumOfDigits(res);
  }
  return res;
}
