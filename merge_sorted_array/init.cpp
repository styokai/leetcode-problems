#include <iostream>

class Solution {
public:
  void merge (vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int size {m + n};
    int arr[size];

    for (int i = 0; i < m; i++) {
      arr[i] = nums1[i];
    }

    for (int i = 0; i < n; i++) {
      arr[m + i] = nums2[i];
    }

    // only solves 19 cases out of 56
    for (int i = 0; i < size - 1; i++) {
      int v {arr[i]};
      int u {arr[i + 1]};
      
      // if current index is greater than next index then shift current index to the right
      if (v > u) {
        arr[i] = u;
        arr[i + 1] = v;
      }
    }

   for (int i = 0; i < size; i++) {
      nums1[i] = arr[i];
    }
  }
}
