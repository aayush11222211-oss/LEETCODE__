class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
       if (n >= 1000LL) {
            ans+=(n-1000LL+1);
        }
        if (n>=1000000LL) {
            ans +=(n-1000000LL+1);
        }
        if (n >= 1000000000LL) {
            ans += (n - 1000000000LL+1);
        }
        if (n>=1000000000000LL) {
            ans +=(n-1000000000000LL+1);
        }
        if (n >= 1000000000000000LL) {
            ans += (n-1000000000000000LL+1);
        }
        
        return ans;
        
          
    }
};