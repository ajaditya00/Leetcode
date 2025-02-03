class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int>ans;
        for(int i=0;i<n;i++){
            ans.push(nums[i]);
        }
        for(int i=1;i<k;i++){
            ans.pop();
        }
        return ans.top();
    }
};