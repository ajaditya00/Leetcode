class Solution {
public:
    long long maximumTotalSum(vector<int>& heights) {
        long long ans = 0;
        sort(heights.begin(),heights.end());
        int prev = -1;
        for(int i = heights.size()-1 ; i >= 0 ; i--){
            if(prev == -1){
                ans+=heights[i];
                prev = ans;
            }else{
                if(prev > heights[i]){
                    prev = heights[i];
                    ans+=prev;
                }else{
                    prev--;
                    ans+=prev;
                }
            }
            if(prev == 0) return -1;
        }
        return ans;
    }
};