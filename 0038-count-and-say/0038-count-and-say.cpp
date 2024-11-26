class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        for(int i=1;i<=n-1;i++){
            string p="";
            int cnt=1;
            for(int j=1;j<ans.size();j++){
                if(ans[j]==ans[j-1]){
                    cnt++;
                }else{
                    p+=to_string(cnt);
                    p+=ans[j-1];
                    cnt=1;
                }

            }
            p+=to_string(cnt)+ans[ans.size()-1];
            ans=p;
        }
        return ans;
    }
};