class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        for(int i=2;i<=n;i++){
            int j=0;
            string temp="";
            while(j<s.size()){
                int cunt=1;
                while(j+1<s.size() && s[j]==s[j+1]){
                    cunt++;
                    j++;
                }
                temp+=to_string(cunt);
                temp+=s[j];
                j++;
            }
            s=temp;
        }
        return s;
    }
};