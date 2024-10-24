class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

  
        return nums[nums.size()-1];
    }
};