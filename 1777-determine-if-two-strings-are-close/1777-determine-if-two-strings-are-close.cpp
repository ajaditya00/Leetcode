class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if(str1.length()!=str2.length()) return false;
        unordered_map<char,int>mp,m;
        for(int i=0;i<str1.length();i++){
            mp[str1[i]]++;
            m[str2[i]]++;
        }
        for(auto x:mp){
            char ch=x.first;
            if (m.find(ch) == m.end()) return false;
        }
        unordered_map<int,int>hp,h1;
        for(auto x:mp){
            int freq=x.second;
            hp[freq]++;
        }
        for(auto x:m){
            int freq=x.second;
            h1[freq]++;
        }
        return hp==h1;
    }
};