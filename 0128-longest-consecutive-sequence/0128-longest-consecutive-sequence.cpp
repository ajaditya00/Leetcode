class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(auto ele:nums){
            mp[ele]=true;
        }   
        int l=0;   
        for(auto &x:mp){
            int num=x.first;
            if(mp.find(num-1)==mp.end()){
                int cnt=num;
                int currStreak=1;
                while(mp.find(cnt+1)!=mp.end()){
                    cnt++;
                    currStreak++;
                }
                l=max(l,currStreak);
            }
            
        }
        return l;
    }
};