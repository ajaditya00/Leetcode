class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>ans;
        vector<int>v;
        int cnt=0;
        for(auto ele:nums){
            ans[ele]++;
        }
        int idx=0;
        for(auto x:ans){
            nums[idx]=x.first;
            idx++;
            cnt++;
        }
        return cnt;

    }
};