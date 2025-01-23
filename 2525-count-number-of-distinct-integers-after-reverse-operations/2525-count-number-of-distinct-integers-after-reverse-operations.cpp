class Solution {
public:
    int reverse(int num){
        int r=0;
        while(num>0){
            r*=10;
            r+=(num%10);
            num/=10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>arr;
        for(int i=0;i<n;i++){
            int rev=reverse(nums[i]);
            arr.insert(nums[i]);
            arr.insert(rev);
        }
        return arr.size();
    }
};