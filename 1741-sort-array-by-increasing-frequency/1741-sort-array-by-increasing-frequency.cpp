class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> maxh;
        for(auto it: mp)
        {
            maxh.push({it.second,-it.first});

        }
        while(maxh.size()>0)
        {
            int freq=maxh.top().first;
            int ele=-maxh.top().second;
            for(int i=1;i<=freq;i++)
            {
                ans.push_back(ele);
            }
                maxh.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
