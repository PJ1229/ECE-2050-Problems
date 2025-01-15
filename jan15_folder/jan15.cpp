#include "jan15_util.h"
#include <iostream>

int main() {
  vector<int> nums = {1, 10000, 100, 4, 5, 5, 10};
  cout << largestNum(nums) << " " << largestNumRec(nums);
}
