class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        int m = prices.size()-1;
        // there will be two cases if the size of prices is more or if the size of discount is more so 
        // run loop for the min one basically 
        int x=min((int)prices.size(),(int)discounts.size());
        double ans=0;
        int i=discounts.size()-1;
        while (x--){
            ans+=prices[m] * (100 - discounts[i]) / 100.0;
            m--;
            i--;
        }

        // Remaining items get no discount
        while (m>=0) {
            ans+=prices[m];
            m--;
        }
        return ans;
    }
};