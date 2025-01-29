class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        int hold=-prices[0];
        int nothold=0;
        for(int i=1;i<n;i++){
            hold=max(hold,nothold-prices[i]);
            nothold=max(nothold, hold + prices[i] - fee);
        }
        return nothold;
    }
};