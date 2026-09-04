class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>presum(n);
        vector<int>suffsum(n);
        presum[0]=nums[0];
        // prefixsum
        for(int i=1;i<n;i++){
            presum[i]=max(nums[i],presum[i-1]);
        }
        //suffixsum
        suffsum[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffsum[i]=min(suffsum[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            if(presum[i]-suffsum[i]<=k){
                return i;
            }
        }
        return -1;
    }
};