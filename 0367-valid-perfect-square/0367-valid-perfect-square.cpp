class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i=1;
        long long prod=1;
        bool ok=true;
        if(num==1) return true;
        while(i<num){
            prod=i*i;
            i++;
            if(prod==num)return true;
        }
        return false;
    }
};