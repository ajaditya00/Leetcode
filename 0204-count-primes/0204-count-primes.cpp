class Solution {
public:
    int countPrimes(int n) {
        vector<bool>p(n+1,true);
        p[0]=p[1]=false;
        int c=0;
        for(int i=2;i<n;i++){
            if(p[i]){
                c++;
                for(int j=2*i;j<n;j=j+i){
                    p[j]=0;
                }
            }

        }
        return c;
    }
};