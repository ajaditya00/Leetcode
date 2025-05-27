class Solution {
public:
    int differenceOfSums(int n, int m) {
        int cnt=0;
        int cntt=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                cnt+=i;
            }
            else
            cntt+=i;
        }
        return (cntt-cnt);
    }
};