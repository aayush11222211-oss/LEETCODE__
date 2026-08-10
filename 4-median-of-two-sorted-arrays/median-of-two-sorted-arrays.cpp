class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans1;
        for(int i=0;i<nums1.size();i++){
            ans1.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {ans1.push_back(nums2[i]);
    }
    sort(ans1.begin(),ans1.end());
    int n = ans1.size();

    // Odd length
    if (n % 2 == 1) {
        return ans1[n / 2];
    }

    // Even length
    return (ans1[n / 2 - 1] + ans1[n / 2]) / 2.0;
   }
    
};