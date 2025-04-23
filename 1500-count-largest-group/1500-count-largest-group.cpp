class Solution {
public:
    int help(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int,int>mp;
        int cnt=0;
        int max=0;
        for(int i=1;i<=n;i++){
            int digit=help(i);
            mp[digit]++;
            if(mp[digit]==max)cnt++;
            else if(mp[digit]>max){
                max=mp[digit];
                cnt=1;
            }
        }
        return cnt;
    }
};