class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int m=nums[0];
        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                m+=nums[i];
            }
            else{
                m=nums[i];
            }
            sum=max(sum,m);
        }
        return sum;
    }
};