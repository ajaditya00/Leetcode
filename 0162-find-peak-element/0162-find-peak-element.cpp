class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int idx=0;
        int m=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if ((i == 0 || nums[i] > nums[i - 1]) && (i == n - 1 || nums[i] > nums[i + 1])){
                idx=i;
                break;
            }
        }
        return idx;
    }
};