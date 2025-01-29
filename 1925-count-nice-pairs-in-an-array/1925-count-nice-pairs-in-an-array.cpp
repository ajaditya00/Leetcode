class Solution {
public:
    int rev(int n) {
        int r = 0;
        while (n > 0) {
            r *= 10;
            r += (n % 10);
            n /= 10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>ans;
        int cnt =0;
        for(int i=0;i<n;i++){
            nums[i]-=rev(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(ans.find(nums[i])!=ans.end()){
                cnt=cnt%1000000007;
                cnt+=ans[nums[i]];
            }
            ans[nums[i]]++;
        }
        return cnt%1000000007;
    }
};