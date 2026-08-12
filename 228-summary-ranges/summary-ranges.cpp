class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
      
      int n=nums.size();
     vector<string> result;
     
         if (nums.empty())
            return result;

        int a = nums[0]; // starting point of current range

        for (int i = 1; i < n; i++) {

            // Gap found
            if (nums[i]!=nums[i-1]+1){

                if (a == nums[i-1]) {
                    result.push_back(to_string(a));
                }
                else {
                    result.push_back(
                        to_string(a) +"->"+to_string(nums[i - 1]));
                }

                // Start a new range
                a = nums[i];
            }
        }
          // now the last range 
          if (a == nums[n-1]) {
            result.push_back(to_string(a));
        }
        else {
            result.push_back(
                to_string(a)+"->"+to_string(nums[n-1]));
        }
      return result;
    }
};