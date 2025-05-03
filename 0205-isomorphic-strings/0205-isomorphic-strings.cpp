class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        unordered_map<char,char>mp;
        unordered_map<char,char>ch;
        for(int i=0;i<n;i++){
            int ch1=s[i];
            int ch2=t[i];
            if(mp.find(ch1)!=mp.end() && mp[ch1]!=ch2 || 
            ch.find(ch2)!=ch.end() && ch[ch2]!=ch1){
                return false;
            }
            mp[ch1]=ch2;
            ch[ch2]=ch1;
        }
        return true;
    }
};