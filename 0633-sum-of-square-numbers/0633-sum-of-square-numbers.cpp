class Solution {
public:
    bool judgeSquareSum(int c) {
        int low=0;
        long high=sqrt(c);
        while(low<=high){
            long sum=(low*low)+(high*high);
            if(sum==c){
                return true;
            }
            else if(sum<c){
                low++;
            }
            else
            high--;
        }
        return false;
    }
};