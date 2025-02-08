class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==1 || n==2) return true;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i] > nums[(i + 1) % n]){
                cnt++;
            }
        }
        if(cnt>1) return false;
        else return true;
    }
};