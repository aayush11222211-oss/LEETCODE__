/*  class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
            { if(nums[i]+nums[j]==target){
                return {i,j};

            }
        } }
        return {};
    }
};

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums ,int target){
        sort(nums.begin(),nums.end());
        int n =nums.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int ans=low+high;
            if(ans==target){
                return {low,high};
                }
                  else if(ans>target){
                    high-=1;
                }                      // THIS IS OPTIMAL WHEN ONLY YES NO ANS NEEDED NOT FOR THE INDEX 
                else{
                    low+=1;
                }
            }
        return{-1,-1};
    }
};*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i]; //assigned value 
            int moreneed=target-num; //diffedrence 
            if(mpp.find(moreneed)!=mpp.end()){ //does the moreneed is in map 
                return {mpp[moreneed],i}; //return that index 
            }
            mpp[num]=i; // to store in a map 
        }
        return {-1,-1};
    }
};
