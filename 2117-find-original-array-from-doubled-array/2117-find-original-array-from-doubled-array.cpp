class Solution {
public:
    vector<int> findOriginalArray(vector<int> &changed) {
        if(changed.size()%2!=0) return {};
        queue<int> q;
        vector<int> result;
        sort(changed.begin(), changed.end());
		
        for (int &i : changed) {
            if (q.front() != i) {
                result.push_back(i);
                q.push(i * 2);
            }
            else 
            q.pop();
        }
        
        if (!q.empty()) return {};
        return result;
    }
};