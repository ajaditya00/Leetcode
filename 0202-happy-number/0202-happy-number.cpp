class Solution {
public:
    bool isHappy(int n) {
        int count=0;
        while(n!=1){
            int sum=0;
            while(n!=0){
                int digit=n%10;
                sum+=digit*digit;
                n/=10;
                count++;
            }
            n=sum;
            if(count>31){
                return false;
            }
        }
        return true;
    }
};