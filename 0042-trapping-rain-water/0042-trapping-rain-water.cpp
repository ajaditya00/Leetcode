class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n);
        pref[0]=nums[0];
        vector<int>suf(n);
        suf[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pref[i]=max(pref[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=max(suf[i+1],nums[i]);
        }
        int total=0;
        for(int i=0;i<n;i++){
        int left=pref[i];
        int right=suf[i];
           if(nums[i]<left && nums[i]<right){
                total+=min(left,right)-nums[i];
            }
        }
        return total;
    }
};