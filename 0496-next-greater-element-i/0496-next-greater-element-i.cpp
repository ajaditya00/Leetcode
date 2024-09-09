class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums2.size());
        stack<int> st;
        ans[nums2.size()-1]=-1;
        st.push(nums2[nums2.size()-1]);
        for(int i=nums2.size()-2;i>=0;i--){
            while(st.size()>0 && st.top()<nums2[i]) st.pop();
            if(st.size()>0) ans[i]=st.top();
            else ans[i]=-1;
            st.push(nums2[i]);
        }
        vector<int> a;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    a.push_back(ans[j]);
                }
            }
        }
        
        return a;
    }
};
