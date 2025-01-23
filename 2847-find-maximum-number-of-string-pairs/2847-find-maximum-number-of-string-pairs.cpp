class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        unordered_set<string>arr;
        int cnt=0;
        for(int i=0;i<n;i++){
            string str=words[i];
            string rev=str;
            reverse(rev.begin(),rev.end());
            if(arr.find(rev)!=arr.end()) cnt++;
            else arr.insert(str);
        }
        return cnt;
    }
};