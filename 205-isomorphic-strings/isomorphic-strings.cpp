class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // unordered_map<char, char> mp1;
        // unordered_map<char, char> mp2;
        // if(s.size()!=t.size()) return false ;
        //  for(int i=0;i<s.size();i++){
        //   if (mp1.count(s[i]) && mp1[s[i]] != t[i])
        //         return false;

        //     if (mp2.count(t[i]) && mp2[t[i]] != s[i])
        //         return false;
        //         mp1[s[i]]=t[i];
        //         mp2[t[i]]=s[i];

        //  }
        //  return mp1.size()==mp2.size();


        if (s.length()!=t.length()) return false;

        // Stores 1-based index of last occurrence (0 means not seen yet)
        int lastseen_s[256]={0};
        int lastseen_t[256]={0};

        for (int i = 0; i <s.length(); i++) {
             char ch1=s[i];
             char ch2=t[i];
            if(lastseen_s[ch1]!=lastseen_t[ch2]) return false;
            lastseen_s[ch1]=i+1;
            lastseen_t[ch2]=i+1;
        }

        return true;
    }
};