class Solution {
public:
    bool isBalanced(string num) {
        int sum=0;
        int od=0;
        for(int i=0;i<num.length();i++){
            int n=num[i]-'0';
            if((i+1)%2==0){
                sum+=n;
            }else{
                od+=n;
            }
        }
       return sum==od;
    }
};