class Solution {
public:
    int ways(int i,vector<int>&nums,int t){
        if(i==nums.size()){
            if(t==0) return 1;
            else return 0;
        }
        int take=ways(i+1,nums,t+nums[i]);
        int nottake=ways(i+1,nums,t-nums[i]);
        return (take + nottake);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return ways(0,nums,target);
    }
};