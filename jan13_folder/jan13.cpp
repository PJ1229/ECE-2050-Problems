#include "jan13_util.h"
#include <iostream>
using namespace std;

int main(){
  int n = 125899912;
  cout << "(recursion) sum of digits is:" << sumOfDigitsRec(n) << endl;
  cout << "(iteration) sum of digits is:" << sumOfDigits(n) << endl;
  cout << "(recursion) digital root is:" << digitalRootRec(n) << endl;
  cout << "(iteration) digital root is:" << digitalRoot(n) << endl;
}
