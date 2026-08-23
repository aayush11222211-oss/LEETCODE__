class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        // int n=ages.size();
        // int count=0;
        // for(int x =0;x<ages.size();x++) {
        //     for(int y =0; y<ages.size();y++) {
        //         if(x==y) continue;

        //         if(ages[y]<=0.5*ages[x]+7 ||
        //            ages[y]>ages[x] ||
        //            (ages[y]>100 && ages[x] < 100))
        //             continue;

        //         count++;
        //     }
        // }
        // return count;
        int fq[121]={0};
        for(int age:ages){
            fq[age]++;
        }
      
        int count = 0;

        for(int x=1; x<=120;x++) {
            for(int y=1;y<=120;y++) {

                if(y<=0.5*x+7 ||
                   y>x ||
                   (y >100 && x < 100))
                    continue;

                if(x == y)
                    count+=fq[x]*(fq[x] - 1); // each and evey send to each other 
                else
                    count+=fq[x]*fq[y]; 
            }
        }

        return count;


    }
};