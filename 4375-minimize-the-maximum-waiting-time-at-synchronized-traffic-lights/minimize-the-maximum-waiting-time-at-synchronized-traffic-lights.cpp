class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        long long  n=*max_element(lights.begin(),lights.end());
        int m=arrivalTime.size();
        long long  wait=0;
        for(long long x:arrivalTime){
            long long r=x%period;
            if(r<n) continue;
            else{
                wait=max(wait,(period-r));
            }
        }
        return wait; 
    }
};