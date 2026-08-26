class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int count1=0;
        // if the no of k is greater than the size of string 
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') count1++;
        }
        if(count1<k) return "";
          string ans="";
          int n=s.size();
        for (int i=0;i<n;i++) {
            int count1=0;

            for (int j=i;j<n;j++) {
                if (s[j]=='1')
                    count1++; 
                    if (count1==k) {

                    string curr=s.substr(i, j - i + 1);
                    // beacuse we want Shortest and Lexicographically Smallest Beautiful String
                    if (ans=="" ||
                        curr.size()<ans.size() ||    
                        (curr.size()==ans.size()&&curr<ans)) {
                        ans = curr;
                    }
                    break;
                }
            }
        }    
        return ans;
    }
};