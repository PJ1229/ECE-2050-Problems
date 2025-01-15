#include "jan15_util.h"

// iterative version
int largestNum(vector<int>& v) {
  int max = 0;
  for(int i=0; i<v.size(); i++){
    if(v[i] > max){
      max = v[i];
    }
  }
  return max;
}

// recursive version
int largestNumRec(vector<int>& v) {
  if(v.size() > 1){
    v.pop_back();
    int last = v.back();
    return max(last, largestNumRec(v));   
  }
  return v[0];
}
