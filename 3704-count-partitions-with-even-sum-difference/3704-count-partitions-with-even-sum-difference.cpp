class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int left=0;
        int right=0;
        int cnt=0;
        for(int i=0;i<n-1;i++){
            left+=nums[i];
            right=total-left;
            if((left %2)==(right %2)){
                cnt++;
            }
        }
        return cnt;
    }
};