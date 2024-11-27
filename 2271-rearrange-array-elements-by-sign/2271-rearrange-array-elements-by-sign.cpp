class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int p=0,ne=1;
        for(int num:nums){
            if(num>0){
                ans[p]=num;
                p+=2;
            }else{
                ans[ne]=num;
                ne+=2;
            }
        }
        return ans;
    }
};