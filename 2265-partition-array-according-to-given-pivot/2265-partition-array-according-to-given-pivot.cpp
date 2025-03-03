class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>left;
        vector<int>right;
        vector<int>equal;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                left.push_back(nums[i]);
            }else if(nums[i]==pivot){
                equal.push_back(nums[i]);
            }else{
                right.push_back(nums[i]);
            }
        }
        vector<int>ans;
        ans.insert(ans.end(),left.begin(),left.end());
        ans.insert(ans.end(),equal.begin(),equal.end());
        ans.insert(ans.end(),right.begin(),right.end());
        return  ans;
    }
};