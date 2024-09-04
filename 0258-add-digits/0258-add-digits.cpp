class Solution {
public:
    int addDigits(int num) {
        int cnt=0;
        int n=0;
        while(num>0){
            n=num%10;
            cnt+=n;
            num/=10;
            if(num==0 && cnt>9){
                num=cnt;
                cnt=0;
            }
        }
        return cnt;
    }
};