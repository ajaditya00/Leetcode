class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            result.push_back(nums1[i]);
        }
        for(int j=0;j<m;j++){
            result.push_back(nums2[j]);
        }
        sort(result.begin(), result.end());

        int count=result.size();
        if (count % 2 == 0) {
            int mid1 = count / 2 - 1;
            int mid2 = count / 2;
            return (result[mid1] + result[mid2]) / 2.0;
        } else {
            int mid = count / 2;
            return result[mid];
        }
    }
};