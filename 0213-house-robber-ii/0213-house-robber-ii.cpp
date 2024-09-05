class Solution {
public:
    int solve(vector<int>& nums, int st, int end) {

        int pre = 0, curr = 0;

        for(int i=st; i<=end; i++) {
            int temp = max(pre + nums[i], curr);
            pre = curr;
            curr = temp;
        } 
         
        return curr; 
    }

    int rob(vector<int>& nums) {
        
        int n = nums.size();

        if(n < 2) return n ? nums[0] : 0;

        return max(solve(nums, 0, n-2), solve(nums, 1, n-1));
    }
};