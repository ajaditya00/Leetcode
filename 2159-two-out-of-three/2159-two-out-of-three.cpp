class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        map<int,int>mp;
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        set<int>s3(nums3.begin(),nums3.end());
        for(auto id:s1){
            mp[id]++;
        }
        for(auto id:s2){
            mp[id]++;
        }
        for(auto id:s3){
            mp[id]++;
        }
        for(auto i:mp){
            if(i.second>=2){
                ans.push_back(i.first);
            }
        }
        return ans;


    }
};