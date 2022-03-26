// Best time to buy and sell stocks

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0 , currPrice = prices[0] ;
        
        for (int i=0; i<prices.size(); i++)
        {
            if (prices[i]>currPrice)
            {
                profit = max(profit,prices[i]-currPrice) ;
            }
            else
                currPrice = prices[i] ;
        }
        
        return profit ;
        
    }
};
