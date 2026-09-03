class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even=0;
        int odd=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0) even++;
            else odd++;
        }
        if(even==nums1.size() || odd==nums1.size()) return true;
        int small=*min_element(nums1.begin(),nums1.end());
        if(small%2!=0){
            return true ;
        }
        return false;
    }
};