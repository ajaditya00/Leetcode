class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans=arr;
        sort(ans.begin(),ans.end());
        unordered_map<int,int>mp;
        int r=1;
        for(auto num:ans){
            if(mp.find(num)==mp.end()){
                mp[num]=r++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};