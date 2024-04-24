class Solution {
public:
//using Kedans Algorithim
    int maxSubArray(vector<int>& nums) {
        long long sum=0;
        long long maxi=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
