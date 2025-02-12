class Solution {
public:
    int check(int n){
        int val=0;
        while(n>0){
            val+=n%10;
            n/=10;
        }
        return val;
    }
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int msum=-1;
        for(auto num:nums){
            int digit=check(num);
            if(mp.count(digit)){
                msum=max(msum,mp[digit]+num);
            }
            mp[digit]=max(mp[digit],num);
        }
        return msum;
    }
};