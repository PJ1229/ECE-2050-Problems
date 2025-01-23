#include "util.h"

void swap(char &x, char &y) {
  char temp;
  temp = x;
  x = y;
  y = temp;
}

string reverseStrRec(string s) {
  if(s.length() <= 1){
    return s;
  }
  swap(s[0], s[s.length() - 1]);
  string middle = s.substr(s[1], s[s.length() - 2]);
  return s[0] + reverseStrRec(middle) + s[s.length() - 1];
}

// iterative one
void reverseStr(string &s) {
  for(int i=0; i<s.length()/2; i++){
    swap(s[i], s[s.length() - i - 1]);
  }
}
