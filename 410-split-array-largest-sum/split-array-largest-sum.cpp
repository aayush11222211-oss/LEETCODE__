class Solution {
public:
     int largestSum(vector<int>&nums,int maxsum){
        int part=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=maxsum){
                sum+=nums[i];
            }
            else{
                part++;
                sum=nums[i];
            }
        }
        return part;

     }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int split=largestSum(nums,mid);
            if(split>k){
                low=mid+1;// increase subarray sum 
            }
            else{
                high=mid-1;
            }

        }
        return low;
    }
};