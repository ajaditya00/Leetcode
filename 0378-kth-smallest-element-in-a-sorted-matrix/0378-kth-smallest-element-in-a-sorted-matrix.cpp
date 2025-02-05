class Solution {
public:
    int kthSmallest(vector<vector<int>>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int, int>> pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                pq.push({nums[i][j], i}); 
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        return pq.top().first;
    }
};