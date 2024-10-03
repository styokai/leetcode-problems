#include <iostream>

/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1.

To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged.
The last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

#include <iostream>

class Solution {
public:
  void merge (vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int const size {m + n};
    int arr[size];

    // I'M SO CLOSEEEEE
    for (int i = 0; i < size; i++) {
        if (i < m) {
            int u = nums1[i];
            int v = nums2[i];
            if (u > v){
                arr[i] = v;
                arr[m + i] = u;
            } else {
                arr[i] = u;
                arr[m + i] = v;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ", ";
    }
  }
};
