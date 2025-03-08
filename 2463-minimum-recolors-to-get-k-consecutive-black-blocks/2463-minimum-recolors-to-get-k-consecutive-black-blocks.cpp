class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.length();
        int cnt=0;
        int m=INT_MIN;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                cnt++;
            }
        }
        m=cnt;
        for(int i=k;i<n;i++){
            if(blocks[i-k]=='W')cnt--;
            if(blocks[i]=='W')cnt++;
            m=min(m,cnt);
        }
        return m;
        
    }
};