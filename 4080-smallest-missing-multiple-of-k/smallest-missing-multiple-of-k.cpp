class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int num=k;
       for(int i=0;i<nums.size();i++){
        if(num==nums[i]){
            num+=k;
        }
       }
       return num;
    }
};