class Solution {
public:
    int maxProfit(vector<int>& price) {
        int best_buy=price[0];
    int max_profit=0;
    
    for(int i=1;i<price.size();i++){
        
        best_buy=min(price[i],best_buy);
             
         max_profit=max(max_profit, price[i] - best_buy);

    }


    return max_profit;

    }
};