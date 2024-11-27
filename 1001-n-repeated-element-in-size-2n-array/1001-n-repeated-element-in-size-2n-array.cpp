class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int nu=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    nu=nums[i];
                }
            }
        }
        return nu;
    }
};