#include "util.h"
#include <iostream>

int main(){
  string str1 = "Teest";
  string str2 = "Test";

  // cout << reverseStrRec(str1) << " " << reverseStrRec(str2) << endl;
  
  reverseStr(str1);
  reverseStr(str2);
  cout << str1 << " " << str2 << endl;
}
