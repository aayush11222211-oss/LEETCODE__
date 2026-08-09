class Solution {
public:
int check(vector<int>& weights,int cap){
            int n=weights.size();
            int load=0;
             int days=1;
            for(int i=0;i<n;i++){
                if(load+weights[i]>cap){
                    days+=1; // moves to the next day 
                    load=weights[i];  // load for the next day 
                }
                else{
                    load+=weights[i];
                }
            }
            return days ;


   }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0); // 0 intial value of the sum 
        while(low<=high){
            int mid=low+(high-low)/2;
            int no_ofdays=check(weights,mid);
            if(no_ofdays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};