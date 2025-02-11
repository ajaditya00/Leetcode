class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        priority_queue<pair<int,vector<int>>>pq;
        for(auto ele:nums){
            int x=ele[0],y=ele[1];
            int dis=((x*x)+(y*y));
            pq.push({dis,ele});
            if(pq.size()>k)pq.pop();
        }
        vector<vector<int>>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};