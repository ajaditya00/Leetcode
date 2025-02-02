class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int i;
        sort(nums.begin(),nums.end(),greater<int>());
        for(i=1;i<n;i++){
            if(cnt==2){
                return nums[i-1];
            }
            if(nums[i]!=nums[i-1]){
               cnt++; 
            }
        }

        if(cnt==2){
            return nums[i-1];
        }
        return nums[0];
    }
};