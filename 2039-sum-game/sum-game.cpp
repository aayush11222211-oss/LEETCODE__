class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int sum1=0;
        int sum2=0;
        int count1=0,count2=0;
       for(int i=0;i<n;i++){
            if(i<n/2){
                if(num[i]=='?') count1++;
                else sum1+=num[i]-'0'; 
            }
            else{
                if(num[i]=='?') count2++;
                else sum2+=num[i]-'0';
            }
        }
       if((count1+count2)%2==1) return true;
        return sum1-sum2!=(count2-count1)/2*9;
    }
};