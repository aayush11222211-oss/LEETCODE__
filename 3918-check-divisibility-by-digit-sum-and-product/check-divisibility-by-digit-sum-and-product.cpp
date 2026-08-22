class Solution {
public:
    bool checkDivisibility(int n) {
        long long pro=1;
        int x=n;
        long long sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            pro*=rem;
            n/=10;
        }
        int sum1=sum+pro;
        if(x%sum1==0){
            return true;
        }
        return false;
    }
};