class Solution {
public:
    int hIndex(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int  i;
        for(i=0;i<n;i++){
            if(nums[i]<i+1) break;
        }
        return i;
    }
};