class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD= 1e9 + 7;
        int odd=0, even=1;
        int pre=0,cnt=0;
        for(int num:arr){
            pre+=num;
            if(pre%2==0){
                cnt=(cnt+odd)%MOD;
                even++;
            }
            else{
                cnt=(cnt+even)%MOD;
                odd++;
            }
        }
        return cnt;

    }
};