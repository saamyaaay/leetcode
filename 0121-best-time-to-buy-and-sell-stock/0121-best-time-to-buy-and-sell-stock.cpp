class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int i =0; i<prices.size(); i++){
            if (buy>prices[i]){
                buy=prices[i];
            }
            else{
                int current = prices[i]- buy;
                profit = max (current,profit);
            }
        }
        return profit;
    }
};