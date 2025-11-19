#include <iostream>
#include <vector>  
#include <algorithm> 
using namespace std;
class Solution {
public:
    vector<int> findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int m = nums1.size();
       int n = nums2.size();
       int size = m + n;
       vector<int> merged(size);
       merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
         if (size % 2 == 0) {
              return (merged[size / 2 - 1] + merged[size / 2]) / 2.0;
         } else {
              return {merged[size / 2]};
         }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3 , 4};
    vector<int> result = sol.findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << result[0] << endl; // Output: Median: 2
    return 0;
}