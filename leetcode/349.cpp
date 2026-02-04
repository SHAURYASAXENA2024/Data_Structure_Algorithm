// previous solution
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> v;
//     int i = 0, j = 0;

//     while (i < nums1.size() && j < nums2.size()) {
//         if (nums1[i] == nums2[j]) {
//             v.push_back(nums1[i]);

//             // Skip duplicates in both arrays
//             int val = nums1[i];
//             while (i < nums1.size() && nums1[i] == val) i++;
//             while (j < nums2.size() && nums2[j] == val) j++;

//         } else if (nums1[i] < nums2[j]) {
//             i++;
//         } else {
//             j++;
//         }
//     }
//     return v;
        
//     }
// };
