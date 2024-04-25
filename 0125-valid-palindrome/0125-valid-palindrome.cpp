class Solution {
public:
bool solve(int i, int j, vector<char>&ans){
    if(i>=j/2) return true;

    if(ans[i]!=ans[j-i-1]){
        return false;
    }
       // swap(ans[i],ans[j-i-1]);
        return solve(i+1,j,ans);
}
    bool isPalindrome(string s) {
       vector<char>ans;
       for(char a: s ){
        if(isalnum(a)){
            ans.push_back(tolower(a));
            
        }
       }
        int n=ans.size();
        return solve(0,n,ans);

    }
};