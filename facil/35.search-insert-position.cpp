// @leet imports start
#include <bits/stdc++.h>
#include <iterator>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int index = 0;
    for (int i = 0; i < size(nums); i++) {
      if (nums[i] == target) {
        index = i;
        break;
      }

      if (nums[i] < target) {
        index = i + 1;
      }
    }

    return index;
  }
};
// @leet end

int main() {}
