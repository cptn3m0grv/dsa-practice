class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int max_profit = 0;
        int min_val = INT_MAX;
        int sum = max_profit;
        for(int i = 0; i < prices.size(); ++i){
            if(min_val > prices[i]){
                min_val = prices[i];
            }else if(prices[i]-min_val > max_profit){
                sum += prices[i]-min_val;
                min_val = prices[i];
            }
        }
        
        return sum;
    }
};
