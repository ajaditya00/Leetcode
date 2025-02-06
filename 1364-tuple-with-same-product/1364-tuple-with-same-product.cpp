class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int pro=nums[i]*nums[j];
                cnt+=(mp[pro]*8);
                mp[pro]++;
            }
        }
        return cnt;
    }
};