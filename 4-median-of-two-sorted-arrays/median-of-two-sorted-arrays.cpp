class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    //     vector<int>ans1;
    //     for(int i=0;i<nums1.size();i++){
    //         ans1.push_back(nums1[i]);
    //     }
    //     for(int i=0;i<nums2.size();i++)
    //     {ans1.push_back(nums2[i]);
    // }
    // sort(ans1.begin(),ans1.end());
    // int n = ans1.size();

    // // Odd length                                brute force approch 
    // if (n % 2 == 1) {
    //     return ans1[n / 2];
    // }

    // // Even length
    // return (ans1[n / 2 - 1] + ans1[n / 2]) / 2.0;


    // better with two pointers (swap)
    if(nums1.size()<nums2.size()){
        swap(nums1,nums2);
    }
    int m = nums1.size();
        int n = nums2.size();

        // Increase nums1 size
        nums1.resize(m + n);
        int i = m - 1; // numd1
        int j = n - 1; // nums2
        int k = m + n - 1; 
        while(i>=0 &&j>=0){
                if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else 
                nums1[k--] = nums2[j--];
        }

        // Remaining elements of nums2
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

        int size = m + n;

        if (size % 2 == 1)
            return nums1[size / 2];

        return (nums1[size / 2 - 1] + nums1[size / 2]) / 2.0;
        



   }
    
};