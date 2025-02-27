class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;  
        int max_e = 0; 
        while (l < r) {
            int lh = height[l];  
            int rh = height[r];  
            int min_h = min(lh, rh);  
            max_e = max(max_e, min_h * (r - l));
            if (lh < rh)
                l++;  
            else
                r--; 
        } 
        return max_e;
    }
};
