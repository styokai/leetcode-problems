#include <iostream>

/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1.

To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged.
The last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

#include <iostream>
#include <vector>

class Solution {
public:
  void merge (vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int const size {m + n};
    int arr[size];

    if (n <= 0) return;
    if (n > 0 & m <= 0){
        for (int i = 0; i < n; i++) {
            nums1[i] = nums2[i];
        }
        return;
    }

    for (int i = 0; i < size; i++) {
        if (i < m) {
            int u = nums1[i]; // 2
            int v = nums2[i]; // 5
            if (u > v){
                arr[i] = v;
                arr[m + i] = u;
                //std::cout << u << ", " << v << " gotcha\n";
            } else {
                std::cout << i << ": " << u;
                std::cout << " > ";
                std::cout << v << '\n';
                arr[i] = u; // 2
                arr[m + i] = v; // 5
            }
        }
    }

    // didn't wanted to make a new loop
    for (int i = 0; i < size - 1; i++) {
        int u {arr[i]};
        int v {arr[i + 1]};
        if (u > v) {
            arr[i] = v;
            arr[i + 1] = u;
        }
    }

    for (int i = 0; i < size; i++) {
        nums1[i] = arr[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ", ";
    }
  }
};
