#include <iostream>

/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1.

To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged.
The last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

class Solution {
public:
  void merge (vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int const size {m + n};
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
