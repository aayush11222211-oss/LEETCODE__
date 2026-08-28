class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n=nums.size();
        for(int i=1;i<n;i++){
          if(nums[i]-nums[i-1]==1) continue;
          int d=nums[i-1]+1;
          while(d<nums[i]){
            ans.push_back(d);
            d++;
          }
          
        }
        return ans;
    }
};