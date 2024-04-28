class Solution {
public:
    bool isPalindrome(int x) {
        long long on=x;
        long long r=0;
        while(x!=0){
            long long digit=x%10;
            r=r*10+digit;
            x/=10;
        }
        if(on<0)
        {
            r= (-1)* r;
        }
        return on==r;
    }
};