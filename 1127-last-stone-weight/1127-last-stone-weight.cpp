class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>ans;
        for(auto ele :stones){
            ans.push(ele);
        }
        while(ans.size()>1){
            int a=ans.top();
            ans.pop();
            int b=ans.top();
            ans.pop();
            if(a!=b){
                int diff=(a-b);
                ans.push(diff);
            }
        }
        return ans.empty()?0:ans.top();
    }
};