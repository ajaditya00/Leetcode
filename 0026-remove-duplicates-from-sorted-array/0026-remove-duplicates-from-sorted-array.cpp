class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        if(nums.empty()) return 0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[cnt]){
                cnt++;
                nums[cnt]=nums[i];
            }
        }
        return cnt+1;
    }
};