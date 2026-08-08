class Solution {
public:
  // function to find the max bananas koko can eat at once 
    //   int findMax(vector<int>& piles){
    //     int maxi=INT_MIN;                    
    //     for(int i=0;i<piles.size();i++){    
    //         maxi=max(maxi,piles[i]);
    //         }
    //     return maxi;
    //    }

       // no of hours that koko takes to finish all the piles 
      long long  totalHours(vector<int>&piles ,int mid){
       long long  hour=0;
       for(int i=0;i<piles.size();i++){
         hour+=ceil((double)piles[i]/mid);
            }
        return hour;
       }
      int minEatingSpeed(vector<int>& piles, int h) {
       int low=1;
       int high=*max_element(piles.begin(),piles.end());
       while(low<=high){
        int mid=low+(high-low)/2;
        long long  hours=totalHours(piles, mid);
        if(hours<=h){
            high=mid-1;
        }
        else{
            low=mid+1;
          }

       } 
       return low;
    }
};