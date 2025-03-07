class Solution {
public:
    bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans={-1,-1};
        vector<int>prim;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                prim.push_back(i);
            }
        }
        int m=INT_MAX;
        for(int i=1;i<prim.size();i++){
            int diff=(prim[i]-prim[i-1]);
            if(diff<m){
                m=diff;
                ans={prim[i-1],prim[i]};
            }
        }
        return ans;
    }
};